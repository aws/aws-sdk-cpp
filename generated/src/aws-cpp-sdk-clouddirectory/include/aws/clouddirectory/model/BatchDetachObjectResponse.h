/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Represents the output of a <a>DetachObject</a> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchDetachObjectResponse">AWS
   * API Reference</a></p>
   */
  class BatchDetachObjectResponse
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchDetachObjectResponse() = default;
    AWS_CLOUDDIRECTORY_API BatchDetachObjectResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchDetachObjectResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>ObjectIdentifier</code> of the detached object.</p>
     */
    inline const Aws::String& GetDetachedObjectIdentifier() const { return m_detachedObjectIdentifier; }
    inline bool DetachedObjectIdentifierHasBeenSet() const { return m_detachedObjectIdentifierHasBeenSet; }
    template<typename DetachedObjectIdentifierT = Aws::String>
    void SetDetachedObjectIdentifier(DetachedObjectIdentifierT&& value) { m_detachedObjectIdentifierHasBeenSet = true; m_detachedObjectIdentifier = std::forward<DetachedObjectIdentifierT>(value); }
    template<typename DetachedObjectIdentifierT = Aws::String>
    BatchDetachObjectResponse& WithDetachedObjectIdentifier(DetachedObjectIdentifierT&& value) { SetDetachedObjectIdentifier(std::forward<DetachedObjectIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_detachedObjectIdentifier;
    bool m_detachedObjectIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
