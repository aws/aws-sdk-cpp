/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>KMS key info.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/KmsKey">AWS
   * API Reference</a></p>
   */
  class KmsKey
  {
  public:
    AWS_GROUNDSTATION_API KmsKey() = default;
    AWS_GROUNDSTATION_API KmsKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API KmsKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>KMS Alias Arn.</p>
     */
    inline const Aws::String& GetKmsAliasArn() const { return m_kmsAliasArn; }
    inline bool KmsAliasArnHasBeenSet() const { return m_kmsAliasArnHasBeenSet; }
    template<typename KmsAliasArnT = Aws::String>
    void SetKmsAliasArn(KmsAliasArnT&& value) { m_kmsAliasArnHasBeenSet = true; m_kmsAliasArn = std::forward<KmsAliasArnT>(value); }
    template<typename KmsAliasArnT = Aws::String>
    KmsKey& WithKmsAliasArn(KmsAliasArnT&& value) { SetKmsAliasArn(std::forward<KmsAliasArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>KMS Alias Name.</p>
     */
    inline const Aws::String& GetKmsAliasName() const { return m_kmsAliasName; }
    inline bool KmsAliasNameHasBeenSet() const { return m_kmsAliasNameHasBeenSet; }
    template<typename KmsAliasNameT = Aws::String>
    void SetKmsAliasName(KmsAliasNameT&& value) { m_kmsAliasNameHasBeenSet = true; m_kmsAliasName = std::forward<KmsAliasNameT>(value); }
    template<typename KmsAliasNameT = Aws::String>
    KmsKey& WithKmsAliasName(KmsAliasNameT&& value) { SetKmsAliasName(std::forward<KmsAliasNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>KMS Key Arn.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    KmsKey& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kmsAliasArn;
    bool m_kmsAliasArnHasBeenSet = false;

    Aws::String m_kmsAliasName;
    bool m_kmsAliasNameHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
