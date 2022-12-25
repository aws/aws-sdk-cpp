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
   * <p>Represents the output of a <a>DetachFromIndex</a> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchDetachFromIndexResponse">AWS
   * API Reference</a></p>
   */
  class BatchDetachFromIndexResponse
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchDetachFromIndexResponse();
    AWS_CLOUDDIRECTORY_API BatchDetachFromIndexResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchDetachFromIndexResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>ObjectIdentifier</code> of the object that was detached from the
     * index.</p>
     */
    inline const Aws::String& GetDetachedObjectIdentifier() const{ return m_detachedObjectIdentifier; }

    /**
     * <p>The <code>ObjectIdentifier</code> of the object that was detached from the
     * index.</p>
     */
    inline bool DetachedObjectIdentifierHasBeenSet() const { return m_detachedObjectIdentifierHasBeenSet; }

    /**
     * <p>The <code>ObjectIdentifier</code> of the object that was detached from the
     * index.</p>
     */
    inline void SetDetachedObjectIdentifier(const Aws::String& value) { m_detachedObjectIdentifierHasBeenSet = true; m_detachedObjectIdentifier = value; }

    /**
     * <p>The <code>ObjectIdentifier</code> of the object that was detached from the
     * index.</p>
     */
    inline void SetDetachedObjectIdentifier(Aws::String&& value) { m_detachedObjectIdentifierHasBeenSet = true; m_detachedObjectIdentifier = std::move(value); }

    /**
     * <p>The <code>ObjectIdentifier</code> of the object that was detached from the
     * index.</p>
     */
    inline void SetDetachedObjectIdentifier(const char* value) { m_detachedObjectIdentifierHasBeenSet = true; m_detachedObjectIdentifier.assign(value); }

    /**
     * <p>The <code>ObjectIdentifier</code> of the object that was detached from the
     * index.</p>
     */
    inline BatchDetachFromIndexResponse& WithDetachedObjectIdentifier(const Aws::String& value) { SetDetachedObjectIdentifier(value); return *this;}

    /**
     * <p>The <code>ObjectIdentifier</code> of the object that was detached from the
     * index.</p>
     */
    inline BatchDetachFromIndexResponse& WithDetachedObjectIdentifier(Aws::String&& value) { SetDetachedObjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The <code>ObjectIdentifier</code> of the object that was detached from the
     * index.</p>
     */
    inline BatchDetachFromIndexResponse& WithDetachedObjectIdentifier(const char* value) { SetDetachedObjectIdentifier(value); return *this;}

  private:

    Aws::String m_detachedObjectIdentifier;
    bool m_detachedObjectIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
