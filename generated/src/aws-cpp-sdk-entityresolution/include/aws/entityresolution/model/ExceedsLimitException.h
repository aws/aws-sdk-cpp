/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>The request was rejected because it attempted to create resources beyond the
   * current Entity Resolution account limits. The error message describes the limit
   * exceeded. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/ExceedsLimitException">AWS
   * API Reference</a></p>
   */
  class ExceedsLimitException
  {
  public:
    AWS_ENTITYRESOLUTION_API ExceedsLimitException() = default;
    AWS_ENTITYRESOLUTION_API ExceedsLimitException(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API ExceedsLimitException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ExceedsLimitException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the quota that has been breached.</p>
     */
    inline const Aws::String& GetQuotaName() const { return m_quotaName; }
    inline bool QuotaNameHasBeenSet() const { return m_quotaNameHasBeenSet; }
    template<typename QuotaNameT = Aws::String>
    void SetQuotaName(QuotaNameT&& value) { m_quotaNameHasBeenSet = true; m_quotaName = std::forward<QuotaNameT>(value); }
    template<typename QuotaNameT = Aws::String>
    ExceedsLimitException& WithQuotaName(QuotaNameT&& value) { SetQuotaName(std::forward<QuotaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current quota value for the customers.</p>
     */
    inline int GetQuotaValue() const { return m_quotaValue; }
    inline bool QuotaValueHasBeenSet() const { return m_quotaValueHasBeenSet; }
    inline void SetQuotaValue(int value) { m_quotaValueHasBeenSet = true; m_quotaValue = value; }
    inline ExceedsLimitException& WithQuotaValue(int value) { SetQuotaValue(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_quotaName;
    bool m_quotaNameHasBeenSet = false;

    int m_quotaValue{0};
    bool m_quotaValueHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
