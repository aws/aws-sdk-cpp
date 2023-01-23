/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/ResourceSet.h>
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
namespace FMS
{
namespace Model
{
  class GetResourceSetResult
  {
  public:
    AWS_FMS_API GetResourceSetResult();
    AWS_FMS_API GetResourceSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API GetResourceSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the specified resource set.</p>
     */
    inline const ResourceSet& GetResourceSet() const{ return m_resourceSet; }

    /**
     * <p>Information about the specified resource set.</p>
     */
    inline void SetResourceSet(const ResourceSet& value) { m_resourceSet = value; }

    /**
     * <p>Information about the specified resource set.</p>
     */
    inline void SetResourceSet(ResourceSet&& value) { m_resourceSet = std::move(value); }

    /**
     * <p>Information about the specified resource set.</p>
     */
    inline GetResourceSetResult& WithResourceSet(const ResourceSet& value) { SetResourceSet(value); return *this;}

    /**
     * <p>Information about the specified resource set.</p>
     */
    inline GetResourceSetResult& WithResourceSet(ResourceSet&& value) { SetResourceSet(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the resource set.</p>
     */
    inline const Aws::String& GetResourceSetArn() const{ return m_resourceSetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource set.</p>
     */
    inline void SetResourceSetArn(const Aws::String& value) { m_resourceSetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource set.</p>
     */
    inline void SetResourceSetArn(Aws::String&& value) { m_resourceSetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource set.</p>
     */
    inline void SetResourceSetArn(const char* value) { m_resourceSetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource set.</p>
     */
    inline GetResourceSetResult& WithResourceSetArn(const Aws::String& value) { SetResourceSetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource set.</p>
     */
    inline GetResourceSetResult& WithResourceSetArn(Aws::String&& value) { SetResourceSetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource set.</p>
     */
    inline GetResourceSetResult& WithResourceSetArn(const char* value) { SetResourceSetArn(value); return *this;}

  private:

    ResourceSet m_resourceSet;

    Aws::String m_resourceSetArn;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
