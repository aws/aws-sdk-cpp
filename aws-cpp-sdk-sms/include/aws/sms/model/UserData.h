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
   * <p>A script that runs on first launch of an Amazon EC2 instance. Used for
   * configuring the server during launch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/UserData">AWS API
   * Reference</a></p>
   */
  class UserData
  {
  public:
    AWS_SMS_API UserData();
    AWS_SMS_API UserData(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API UserData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon S3 location of the user-data script.</p>
     */
    inline const S3Location& GetS3Location() const{ return m_s3Location; }

    /**
     * <p>Amazon S3 location of the user-data script.</p>
     */
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }

    /**
     * <p>Amazon S3 location of the user-data script.</p>
     */
    inline void SetS3Location(const S3Location& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }

    /**
     * <p>Amazon S3 location of the user-data script.</p>
     */
    inline void SetS3Location(S3Location&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }

    /**
     * <p>Amazon S3 location of the user-data script.</p>
     */
    inline UserData& WithS3Location(const S3Location& value) { SetS3Location(value); return *this;}

    /**
     * <p>Amazon S3 location of the user-data script.</p>
     */
    inline UserData& WithS3Location(S3Location&& value) { SetS3Location(std::move(value)); return *this;}

  private:

    S3Location m_s3Location;
    bool m_s3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
