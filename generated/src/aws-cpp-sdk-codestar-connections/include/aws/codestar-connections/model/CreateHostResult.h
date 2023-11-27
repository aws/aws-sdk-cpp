/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codestar-connections/model/Tag.h>
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
namespace CodeStarconnections
{
namespace Model
{
  class CreateHostResult
  {
  public:
    AWS_CODESTARCONNECTIONS_API CreateHostResult();
    AWS_CODESTARCONNECTIONS_API CreateHostResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARCONNECTIONS_API CreateHostResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the host to be created.</p>
     */
    inline const Aws::String& GetHostArn() const{ return m_hostArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the host to be created.</p>
     */
    inline void SetHostArn(const Aws::String& value) { m_hostArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the host to be created.</p>
     */
    inline void SetHostArn(Aws::String&& value) { m_hostArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the host to be created.</p>
     */
    inline void SetHostArn(const char* value) { m_hostArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the host to be created.</p>
     */
    inline CreateHostResult& WithHostArn(const Aws::String& value) { SetHostArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the host to be created.</p>
     */
    inline CreateHostResult& WithHostArn(Aws::String&& value) { SetHostArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the host to be created.</p>
     */
    inline CreateHostResult& WithHostArn(const char* value) { SetHostArn(value); return *this;}


    /**
     * <p>Tags for the created host.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags for the created host.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Tags for the created host.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags for the created host.</p>
     */
    inline CreateHostResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags for the created host.</p>
     */
    inline CreateHostResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags for the created host.</p>
     */
    inline CreateHostResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Tags for the created host.</p>
     */
    inline CreateHostResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateHostResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateHostResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateHostResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_hostArn;

    Aws::Vector<Tag> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
