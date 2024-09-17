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
   * <p>AWS Key Management Service (KMS) Key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/KmsKey">AWS
   * API Reference</a></p>
   */
  class KmsKey
  {
  public:
    AWS_GROUNDSTATION_API KmsKey();
    AWS_GROUNDSTATION_API KmsKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API KmsKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>KMS Alias Arn.</p>
     */
    inline const Aws::String& GetKmsAliasArn() const{ return m_kmsAliasArn; }
    inline bool KmsAliasArnHasBeenSet() const { return m_kmsAliasArnHasBeenSet; }
    inline void SetKmsAliasArn(const Aws::String& value) { m_kmsAliasArnHasBeenSet = true; m_kmsAliasArn = value; }
    inline void SetKmsAliasArn(Aws::String&& value) { m_kmsAliasArnHasBeenSet = true; m_kmsAliasArn = std::move(value); }
    inline void SetKmsAliasArn(const char* value) { m_kmsAliasArnHasBeenSet = true; m_kmsAliasArn.assign(value); }
    inline KmsKey& WithKmsAliasArn(const Aws::String& value) { SetKmsAliasArn(value); return *this;}
    inline KmsKey& WithKmsAliasArn(Aws::String&& value) { SetKmsAliasArn(std::move(value)); return *this;}
    inline KmsKey& WithKmsAliasArn(const char* value) { SetKmsAliasArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>KMS Alias Name.</p>
     */
    inline const Aws::String& GetKmsAliasName() const{ return m_kmsAliasName; }
    inline bool KmsAliasNameHasBeenSet() const { return m_kmsAliasNameHasBeenSet; }
    inline void SetKmsAliasName(const Aws::String& value) { m_kmsAliasNameHasBeenSet = true; m_kmsAliasName = value; }
    inline void SetKmsAliasName(Aws::String&& value) { m_kmsAliasNameHasBeenSet = true; m_kmsAliasName = std::move(value); }
    inline void SetKmsAliasName(const char* value) { m_kmsAliasNameHasBeenSet = true; m_kmsAliasName.assign(value); }
    inline KmsKey& WithKmsAliasName(const Aws::String& value) { SetKmsAliasName(value); return *this;}
    inline KmsKey& WithKmsAliasName(Aws::String&& value) { SetKmsAliasName(std::move(value)); return *this;}
    inline KmsKey& WithKmsAliasName(const char* value) { SetKmsAliasName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>KMS Key Arn.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline KmsKey& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline KmsKey& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline KmsKey& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
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
