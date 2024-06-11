/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/MLUserDataEncryption.h>
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
   * <p>The encryption-at-rest settings of the transform that apply to accessing user
   * data. Machine learning transforms can access user data encrypted in Amazon S3
   * using KMS.</p> <p>Additionally, imported labels and trained transforms can now
   * be encrypted using a customer provided KMS key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TransformEncryption">AWS
   * API Reference</a></p>
   */
  class TransformEncryption
  {
  public:
    AWS_GLUE_API TransformEncryption();
    AWS_GLUE_API TransformEncryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TransformEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An <code>MLUserDataEncryption</code> object containing the encryption mode
     * and customer-provided KMS key ID.</p>
     */
    inline const MLUserDataEncryption& GetMlUserDataEncryption() const{ return m_mlUserDataEncryption; }
    inline bool MlUserDataEncryptionHasBeenSet() const { return m_mlUserDataEncryptionHasBeenSet; }
    inline void SetMlUserDataEncryption(const MLUserDataEncryption& value) { m_mlUserDataEncryptionHasBeenSet = true; m_mlUserDataEncryption = value; }
    inline void SetMlUserDataEncryption(MLUserDataEncryption&& value) { m_mlUserDataEncryptionHasBeenSet = true; m_mlUserDataEncryption = std::move(value); }
    inline TransformEncryption& WithMlUserDataEncryption(const MLUserDataEncryption& value) { SetMlUserDataEncryption(value); return *this;}
    inline TransformEncryption& WithMlUserDataEncryption(MLUserDataEncryption&& value) { SetMlUserDataEncryption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the security configuration.</p>
     */
    inline const Aws::String& GetTaskRunSecurityConfigurationName() const{ return m_taskRunSecurityConfigurationName; }
    inline bool TaskRunSecurityConfigurationNameHasBeenSet() const { return m_taskRunSecurityConfigurationNameHasBeenSet; }
    inline void SetTaskRunSecurityConfigurationName(const Aws::String& value) { m_taskRunSecurityConfigurationNameHasBeenSet = true; m_taskRunSecurityConfigurationName = value; }
    inline void SetTaskRunSecurityConfigurationName(Aws::String&& value) { m_taskRunSecurityConfigurationNameHasBeenSet = true; m_taskRunSecurityConfigurationName = std::move(value); }
    inline void SetTaskRunSecurityConfigurationName(const char* value) { m_taskRunSecurityConfigurationNameHasBeenSet = true; m_taskRunSecurityConfigurationName.assign(value); }
    inline TransformEncryption& WithTaskRunSecurityConfigurationName(const Aws::String& value) { SetTaskRunSecurityConfigurationName(value); return *this;}
    inline TransformEncryption& WithTaskRunSecurityConfigurationName(Aws::String&& value) { SetTaskRunSecurityConfigurationName(std::move(value)); return *this;}
    inline TransformEncryption& WithTaskRunSecurityConfigurationName(const char* value) { SetTaskRunSecurityConfigurationName(value); return *this;}
    ///@}
  private:

    MLUserDataEncryption m_mlUserDataEncryption;
    bool m_mlUserDataEncryptionHasBeenSet = false;

    Aws::String m_taskRunSecurityConfigurationName;
    bool m_taskRunSecurityConfigurationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
