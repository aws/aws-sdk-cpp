/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/Attachment.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GlobalAccelerator
{
namespace Model
{
  class UpdateCrossAccountAttachmentResult
  {
  public:
    AWS_GLOBALACCELERATOR_API UpdateCrossAccountAttachmentResult();
    AWS_GLOBALACCELERATOR_API UpdateCrossAccountAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API UpdateCrossAccountAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the updated cross-account attachment.</p>
     */
    inline const Attachment& GetCrossAccountAttachment() const{ return m_crossAccountAttachment; }

    /**
     * <p>Information about the updated cross-account attachment.</p>
     */
    inline void SetCrossAccountAttachment(const Attachment& value) { m_crossAccountAttachment = value; }

    /**
     * <p>Information about the updated cross-account attachment.</p>
     */
    inline void SetCrossAccountAttachment(Attachment&& value) { m_crossAccountAttachment = std::move(value); }

    /**
     * <p>Information about the updated cross-account attachment.</p>
     */
    inline UpdateCrossAccountAttachmentResult& WithCrossAccountAttachment(const Attachment& value) { SetCrossAccountAttachment(value); return *this;}

    /**
     * <p>Information about the updated cross-account attachment.</p>
     */
    inline UpdateCrossAccountAttachmentResult& WithCrossAccountAttachment(Attachment&& value) { SetCrossAccountAttachment(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateCrossAccountAttachmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateCrossAccountAttachmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateCrossAccountAttachmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Attachment m_crossAccountAttachment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
