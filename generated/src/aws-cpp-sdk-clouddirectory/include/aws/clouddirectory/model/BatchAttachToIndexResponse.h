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
   * <p>Represents the output of a <a>AttachToIndex</a> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchAttachToIndexResponse">AWS
   * API Reference</a></p>
   */
  class BatchAttachToIndexResponse
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchAttachToIndexResponse() = default;
    AWS_CLOUDDIRECTORY_API BatchAttachToIndexResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchAttachToIndexResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>ObjectIdentifier</code> of the object that was attached to the
     * index.</p>
     */
    inline const Aws::String& GetAttachedObjectIdentifier() const { return m_attachedObjectIdentifier; }
    inline bool AttachedObjectIdentifierHasBeenSet() const { return m_attachedObjectIdentifierHasBeenSet; }
    template<typename AttachedObjectIdentifierT = Aws::String>
    void SetAttachedObjectIdentifier(AttachedObjectIdentifierT&& value) { m_attachedObjectIdentifierHasBeenSet = true; m_attachedObjectIdentifier = std::forward<AttachedObjectIdentifierT>(value); }
    template<typename AttachedObjectIdentifierT = Aws::String>
    BatchAttachToIndexResponse& WithAttachedObjectIdentifier(AttachedObjectIdentifierT&& value) { SetAttachedObjectIdentifier(std::forward<AttachedObjectIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attachedObjectIdentifier;
    bool m_attachedObjectIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
