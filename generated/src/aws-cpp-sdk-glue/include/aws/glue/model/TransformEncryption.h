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
    AWS_GLUE_API TransformEncryption() = default;
    AWS_GLUE_API TransformEncryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TransformEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An <code>MLUserDataEncryption</code> object containing the encryption mode
     * and customer-provided KMS key ID.</p>
     */
    inline const MLUserDataEncryption& GetMlUserDataEncryption() const { return m_mlUserDataEncryption; }
    inline bool MlUserDataEncryptionHasBeenSet() const { return m_mlUserDataEncryptionHasBeenSet; }
    template<typename MlUserDataEncryptionT = MLUserDataEncryption>
    void SetMlUserDataEncryption(MlUserDataEncryptionT&& value) { m_mlUserDataEncryptionHasBeenSet = true; m_mlUserDataEncryption = std::forward<MlUserDataEncryptionT>(value); }
    template<typename MlUserDataEncryptionT = MLUserDataEncryption>
    TransformEncryption& WithMlUserDataEncryption(MlUserDataEncryptionT&& value) { SetMlUserDataEncryption(std::forward<MlUserDataEncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the security configuration.</p>
     */
    inline const Aws::String& GetTaskRunSecurityConfigurationName() const { return m_taskRunSecurityConfigurationName; }
    inline bool TaskRunSecurityConfigurationNameHasBeenSet() const { return m_taskRunSecurityConfigurationNameHasBeenSet; }
    template<typename TaskRunSecurityConfigurationNameT = Aws::String>
    void SetTaskRunSecurityConfigurationName(TaskRunSecurityConfigurationNameT&& value) { m_taskRunSecurityConfigurationNameHasBeenSet = true; m_taskRunSecurityConfigurationName = std::forward<TaskRunSecurityConfigurationNameT>(value); }
    template<typename TaskRunSecurityConfigurationNameT = Aws::String>
    TransformEncryption& WithTaskRunSecurityConfigurationName(TaskRunSecurityConfigurationNameT&& value) { SetTaskRunSecurityConfigurationName(std::forward<TaskRunSecurityConfigurationNameT>(value)); return *this;}
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
