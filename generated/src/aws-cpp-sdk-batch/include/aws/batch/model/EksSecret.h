/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>Specifies the configuration of a Kubernetes <code>secret</code> volume. For
   * more information, see <a
   * href="https://kubernetes.io/docs/concepts/storage/volumes/#secret">secret</a> in
   * the <i>Kubernetes documentation</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksSecret">AWS API
   * Reference</a></p>
   */
  class EksSecret
  {
  public:
    AWS_BATCH_API EksSecret() = default;
    AWS_BATCH_API EksSecret(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksSecret& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the secret. The name must be allowed as a DNS subdomain name. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/overview/working-with-objects/names/#dns-subdomain-names">DNS
     * subdomain names</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline const Aws::String& GetSecretName() const { return m_secretName; }
    inline bool SecretNameHasBeenSet() const { return m_secretNameHasBeenSet; }
    template<typename SecretNameT = Aws::String>
    void SetSecretName(SecretNameT&& value) { m_secretNameHasBeenSet = true; m_secretName = std::forward<SecretNameT>(value); }
    template<typename SecretNameT = Aws::String>
    EksSecret& WithSecretName(SecretNameT&& value) { SetSecretName(std::forward<SecretNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the secret or the secret's keys must be defined.</p>
     */
    inline bool GetOptional() const { return m_optional; }
    inline bool OptionalHasBeenSet() const { return m_optionalHasBeenSet; }
    inline void SetOptional(bool value) { m_optionalHasBeenSet = true; m_optional = value; }
    inline EksSecret& WithOptional(bool value) { SetOptional(value); return *this;}
    ///@}
  private:

    Aws::String m_secretName;
    bool m_secretNameHasBeenSet = false;

    bool m_optional{false};
    bool m_optionalHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
