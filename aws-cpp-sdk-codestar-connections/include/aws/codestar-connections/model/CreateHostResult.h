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


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    
    inline CreateHostResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateHostResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateHostResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    
    inline CreateHostResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_hostArn;

    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
