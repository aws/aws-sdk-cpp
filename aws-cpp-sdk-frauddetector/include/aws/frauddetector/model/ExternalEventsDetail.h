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
    AWS_FRAUDDETECTOR_API ExternalEventsDetail();
    AWS_FRAUDDETECTOR_API ExternalEventsDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API ExternalEventsDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket location for the data.</p>
     */
    inline const Aws::String& GetDataLocation() const{ return m_dataLocation; }

    /**
     * <p>The Amazon S3 bucket location for the data.</p>
     */
    inline bool DataLocationHasBeenSet() const { return m_dataLocationHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket location for the data.</p>
     */
    inline void SetDataLocation(const Aws::String& value) { m_dataLocationHasBeenSet = true; m_dataLocation = value; }

    /**
     * <p>The Amazon S3 bucket location for the data.</p>
     */
    inline void SetDataLocation(Aws::String&& value) { m_dataLocationHasBeenSet = true; m_dataLocation = std::move(value); }

    /**
     * <p>The Amazon S3 bucket location for the data.</p>
     */
    inline void SetDataLocation(const char* value) { m_dataLocationHasBeenSet = true; m_dataLocation.assign(value); }

    /**
     * <p>The Amazon S3 bucket location for the data.</p>
     */
    inline ExternalEventsDetail& WithDataLocation(const Aws::String& value) { SetDataLocation(value); return *this;}

    /**
     * <p>The Amazon S3 bucket location for the data.</p>
     */
    inline ExternalEventsDetail& WithDataLocation(Aws::String&& value) { SetDataLocation(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket location for the data.</p>
     */
    inline ExternalEventsDetail& WithDataLocation(const char* value) { SetDataLocation(value); return *this;}


    /**
     * <p>The ARN of the role that provides Amazon Fraud Detector access to the data
     * location.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The ARN of the role that provides Amazon Fraud Detector access to the data
     * location.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the role that provides Amazon Fraud Detector access to the data
     * location.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The ARN of the role that provides Amazon Fraud Detector access to the data
     * location.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The ARN of the role that provides Amazon Fraud Detector access to the data
     * location.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The ARN of the role that provides Amazon Fraud Detector access to the data
     * location.</p>
     */
    inline ExternalEventsDetail& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role that provides Amazon Fraud Detector access to the data
     * location.</p>
     */
    inline ExternalEventsDetail& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role that provides Amazon Fraud Detector access to the data
     * location.</p>
     */
    inline ExternalEventsDetail& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}

  private:

    Aws::String m_dataLocation;
    bool m_dataLocationHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
