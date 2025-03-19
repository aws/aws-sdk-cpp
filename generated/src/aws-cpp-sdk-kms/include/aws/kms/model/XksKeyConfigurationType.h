/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
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
namespace KMS
{
namespace Model
{

  /**
   * <p>Information about the <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html#concept-external-key">external
   * key </a>that is associated with a KMS key in an external key store. </p> <p>This
   * element appears in a <a>CreateKey</a> or <a>DescribeKey</a> response only for a
   * KMS key in an external key store.</p> <p>The <i>external key</i> is a symmetric
   * encryption key that is hosted by an external key manager outside of Amazon Web
   * Services. When you use the KMS key in an external key store in a cryptographic
   * operation, the cryptographic operation is performed in the external key manager
   * using the specified external key. For more information, see <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/keystore-external.html#concept-external-key">External
   * key</a> in the <i>Key Management Service Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/XksKeyConfigurationType">AWS
   * API Reference</a></p>
   */
  class XksKeyConfigurationType
  {
  public:
    AWS_KMS_API XksKeyConfigurationType() = default;
    AWS_KMS_API XksKeyConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API XksKeyConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the external key in its external key manager. This is the ID that
     * the external key store proxy uses to identify the external key.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    XksKeyConfigurationType& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
