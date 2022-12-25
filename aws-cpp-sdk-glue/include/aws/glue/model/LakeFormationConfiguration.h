/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies Lake Formation configuration settings for the
   * crawler.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/LakeFormationConfiguration">AWS
   * API Reference</a></p>
   */
  class LakeFormationConfiguration
  {
  public:
    AWS_GLUE_API LakeFormationConfiguration();
    AWS_GLUE_API LakeFormationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API LakeFormationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether to use Lake Formation credentials for the crawler instead
     * of the IAM role credentials.</p>
     */
    inline bool GetUseLakeFormationCredentials() const{ return m_useLakeFormationCredentials; }

    /**
     * <p>Specifies whether to use Lake Formation credentials for the crawler instead
     * of the IAM role credentials.</p>
     */
    inline bool UseLakeFormationCredentialsHasBeenSet() const { return m_useLakeFormationCredentialsHasBeenSet; }

    /**
     * <p>Specifies whether to use Lake Formation credentials for the crawler instead
     * of the IAM role credentials.</p>
     */
    inline void SetUseLakeFormationCredentials(bool value) { m_useLakeFormationCredentialsHasBeenSet = true; m_useLakeFormationCredentials = value; }

    /**
     * <p>Specifies whether to use Lake Formation credentials for the crawler instead
     * of the IAM role credentials.</p>
     */
    inline LakeFormationConfiguration& WithUseLakeFormationCredentials(bool value) { SetUseLakeFormationCredentials(value); return *this;}


    /**
     * <p>Required for cross account crawls. For same account crawls as the target
     * data, this can be left as null.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>Required for cross account crawls. For same account crawls as the target
     * data, this can be left as null.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>Required for cross account crawls. For same account crawls as the target
     * data, this can be left as null.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>Required for cross account crawls. For same account crawls as the target
     * data, this can be left as null.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>Required for cross account crawls. For same account crawls as the target
     * data, this can be left as null.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>Required for cross account crawls. For same account crawls as the target
     * data, this can be left as null.</p>
     */
    inline LakeFormationConfiguration& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>Required for cross account crawls. For same account crawls as the target
     * data, this can be left as null.</p>
     */
    inline LakeFormationConfiguration& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>Required for cross account crawls. For same account crawls as the target
     * data, this can be left as null.</p>
     */
    inline LakeFormationConfiguration& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    bool m_useLakeFormationCredentials;
    bool m_useLakeFormationCredentialsHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
