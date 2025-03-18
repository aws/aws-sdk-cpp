/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>Details for the external events data used for model version
   * training.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/ExternalEventsDetail">AWS
   * API Reference</a></p>
   */
  class ExternalEventsDetail
  {
  public:
    AWS_FRAUDDETECTOR_API ExternalEventsDetail() = default;
    AWS_FRAUDDETECTOR_API ExternalEventsDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API ExternalEventsDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 bucket location for the data.</p>
     */
    inline const Aws::String& GetDataLocation() const { return m_dataLocation; }
    inline bool DataLocationHasBeenSet() const { return m_dataLocationHasBeenSet; }
    template<typename DataLocationT = Aws::String>
    void SetDataLocation(DataLocationT&& value) { m_dataLocationHasBeenSet = true; m_dataLocation = std::forward<DataLocationT>(value); }
    template<typename DataLocationT = Aws::String>
    ExternalEventsDetail& WithDataLocation(DataLocationT&& value) { SetDataLocation(std::forward<DataLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that provides Amazon Fraud Detector access to the data
     * location.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    template<typename DataAccessRoleArnT = Aws::String>
    void SetDataAccessRoleArn(DataAccessRoleArnT&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value); }
    template<typename DataAccessRoleArnT = Aws::String>
    ExternalEventsDetail& WithDataAccessRoleArn(DataAccessRoleArnT&& value) { SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataLocation;
    bool m_dataLocationHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
