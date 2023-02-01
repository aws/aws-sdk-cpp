/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
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
namespace Honeycode
{
namespace Model
{

  /**
   * <p>An object that contains the attributes of the submitter of the import
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/ImportJobSubmitter">AWS
   * API Reference</a></p>
   */
  class ImportJobSubmitter
  {
  public:
    AWS_HONEYCODE_API ImportJobSubmitter();
    AWS_HONEYCODE_API ImportJobSubmitter(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API ImportJobSubmitter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The email id of the submitter of the import job, if available.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email id of the submitter of the import job, if available.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email id of the submitter of the import job, if available.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email id of the submitter of the import job, if available.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email id of the submitter of the import job, if available.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email id of the submitter of the import job, if available.</p>
     */
    inline ImportJobSubmitter& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email id of the submitter of the import job, if available.</p>
     */
    inline ImportJobSubmitter& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email id of the submitter of the import job, if available.</p>
     */
    inline ImportJobSubmitter& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>The AWS user ARN of the submitter of the import job, if available.</p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }

    /**
     * <p>The AWS user ARN of the submitter of the import job, if available.</p>
     */
    inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }

    /**
     * <p>The AWS user ARN of the submitter of the import job, if available.</p>
     */
    inline void SetUserArn(const Aws::String& value) { m_userArnHasBeenSet = true; m_userArn = value; }

    /**
     * <p>The AWS user ARN of the submitter of the import job, if available.</p>
     */
    inline void SetUserArn(Aws::String&& value) { m_userArnHasBeenSet = true; m_userArn = std::move(value); }

    /**
     * <p>The AWS user ARN of the submitter of the import job, if available.</p>
     */
    inline void SetUserArn(const char* value) { m_userArnHasBeenSet = true; m_userArn.assign(value); }

    /**
     * <p>The AWS user ARN of the submitter of the import job, if available.</p>
     */
    inline ImportJobSubmitter& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}

    /**
     * <p>The AWS user ARN of the submitter of the import job, if available.</p>
     */
    inline ImportJobSubmitter& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}

    /**
     * <p>The AWS user ARN of the submitter of the import job, if available.</p>
     */
    inline ImportJobSubmitter& WithUserArn(const char* value) { SetUserArn(value); return *this;}

  private:

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_userArn;
    bool m_userArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
