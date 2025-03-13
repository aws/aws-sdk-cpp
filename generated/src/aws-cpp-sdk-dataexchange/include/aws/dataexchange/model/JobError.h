/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/Code.h>
#include <aws/dataexchange/model/Details.h>
#include <aws/dataexchange/model/JobErrorLimitName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/JobErrorResourceTypes.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataExchange
{
namespace Model
{

  /**
   * <p>An error that occurred with the job request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/JobError">AWS
   * API Reference</a></p>
   */
  class JobError
  {
  public:
    AWS_DATAEXCHANGE_API JobError() = default;
    AWS_DATAEXCHANGE_API JobError(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API JobError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The code for the job error.</p>
     */
    inline Code GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(Code value) { m_codeHasBeenSet = true; m_code = value; }
    inline JobError& WithCode(Code value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about the job error.</p>
     */
    inline const Details& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = Details>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Details>
    JobError& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the limit that was reached.</p>
     */
    inline JobErrorLimitName GetLimitName() const { return m_limitName; }
    inline bool LimitNameHasBeenSet() const { return m_limitNameHasBeenSet; }
    inline void SetLimitName(JobErrorLimitName value) { m_limitNameHasBeenSet = true; m_limitName = value; }
    inline JobError& WithLimitName(JobErrorLimitName value) { SetLimitName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the exceeded limit.</p>
     */
    inline double GetLimitValue() const { return m_limitValue; }
    inline bool LimitValueHasBeenSet() const { return m_limitValueHasBeenSet; }
    inline void SetLimitValue(double value) { m_limitValueHasBeenSet = true; m_limitValue = value; }
    inline JobError& WithLimitValue(double value) { SetLimitValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message related to the job error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    JobError& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the resource related to the error.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    JobError& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource related to the error.</p>
     */
    inline JobErrorResourceTypes GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(JobErrorResourceTypes value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline JobError& WithResourceType(JobErrorResourceTypes value) { SetResourceType(value); return *this;}
    ///@}
  private:

    Code m_code{Code::NOT_SET};
    bool m_codeHasBeenSet = false;

    Details m_details;
    bool m_detailsHasBeenSet = false;

    JobErrorLimitName m_limitName{JobErrorLimitName::NOT_SET};
    bool m_limitNameHasBeenSet = false;

    double m_limitValue{0.0};
    bool m_limitValueHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    JobErrorResourceTypes m_resourceType{JobErrorResourceTypes::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
