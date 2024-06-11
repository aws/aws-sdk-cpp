﻿/**
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
  class CreateConnectionResult
  {
  public:
    AWS_CODESTARCONNECTIONS_API CreateConnectionResult();
    AWS_CODESTARCONNECTIONS_API CreateConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARCONNECTIONS_API CreateConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connection to be created. The ARN is
     * used as the connection reference when the connection is shared between Amazon
     * Web Services services.</p>  <p>The ARN is never reused if the connection
     * is deleted.</p> 
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArn = value; }
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArn = std::move(value); }
    inline void SetConnectionArn(const char* value) { m_connectionArn.assign(value); }
    inline CreateConnectionResult& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}
    inline CreateConnectionResult& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}
    inline CreateConnectionResult& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the tags applied to the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline CreateConnectionResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateConnectionResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateConnectionResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline CreateConnectionResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_connectionArn;

    Aws::Vector<Tag> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
