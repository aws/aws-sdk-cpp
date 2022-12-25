/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/model/S3Location.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Contains the location of validation output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/SSMOutput">AWS API
   * Reference</a></p>
   */
  class SSMOutput
  {
  public:
    AWS_SMS_API SSMOutput();
    AWS_SMS_API SSMOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API SSMOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const S3Location& GetS3Location() const{ return m_s3Location; }

    
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }

    
    inline void SetS3Location(const S3Location& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }

    
    inline void SetS3Location(S3Location&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }

    
    inline SSMOutput& WithS3Location(const S3Location& value) { SetS3Location(value); return *this;}

    
    inline SSMOutput& WithS3Location(S3Location&& value) { SetS3Location(std::move(value)); return *this;}

  private:

    S3Location m_s3Location;
    bool m_s3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
