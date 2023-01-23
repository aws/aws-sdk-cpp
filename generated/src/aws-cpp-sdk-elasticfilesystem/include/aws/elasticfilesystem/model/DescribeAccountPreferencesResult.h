/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/model/ResourceIdPreference.h>
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
namespace EFS
{
namespace Model
{
  class DescribeAccountPreferencesResult
  {
  public:
    AWS_EFS_API DescribeAccountPreferencesResult();
    AWS_EFS_API DescribeAccountPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API DescribeAccountPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes the resource ID preference setting for the Amazon Web Services
     * account associated with the user making the request, in the current Amazon Web
     * Services Region.</p>
     */
    inline const ResourceIdPreference& GetResourceIdPreference() const{ return m_resourceIdPreference; }

    /**
     * <p>Describes the resource ID preference setting for the Amazon Web Services
     * account associated with the user making the request, in the current Amazon Web
     * Services Region.</p>
     */
    inline void SetResourceIdPreference(const ResourceIdPreference& value) { m_resourceIdPreference = value; }

    /**
     * <p>Describes the resource ID preference setting for the Amazon Web Services
     * account associated with the user making the request, in the current Amazon Web
     * Services Region.</p>
     */
    inline void SetResourceIdPreference(ResourceIdPreference&& value) { m_resourceIdPreference = std::move(value); }

    /**
     * <p>Describes the resource ID preference setting for the Amazon Web Services
     * account associated with the user making the request, in the current Amazon Web
     * Services Region.</p>
     */
    inline DescribeAccountPreferencesResult& WithResourceIdPreference(const ResourceIdPreference& value) { SetResourceIdPreference(value); return *this;}

    /**
     * <p>Describes the resource ID preference setting for the Amazon Web Services
     * account associated with the user making the request, in the current Amazon Web
     * Services Region.</p>
     */
    inline DescribeAccountPreferencesResult& WithResourceIdPreference(ResourceIdPreference&& value) { SetResourceIdPreference(std::move(value)); return *this;}


    /**
     * <p>Present if there are more records than returned in the response. You can use
     * the <code>NextToken</code> in the subsequent request to fetch the additional
     * descriptions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Present if there are more records than returned in the response. You can use
     * the <code>NextToken</code> in the subsequent request to fetch the additional
     * descriptions.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Present if there are more records than returned in the response. You can use
     * the <code>NextToken</code> in the subsequent request to fetch the additional
     * descriptions.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Present if there are more records than returned in the response. You can use
     * the <code>NextToken</code> in the subsequent request to fetch the additional
     * descriptions.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Present if there are more records than returned in the response. You can use
     * the <code>NextToken</code> in the subsequent request to fetch the additional
     * descriptions.</p>
     */
    inline DescribeAccountPreferencesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Present if there are more records than returned in the response. You can use
     * the <code>NextToken</code> in the subsequent request to fetch the additional
     * descriptions.</p>
     */
    inline DescribeAccountPreferencesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Present if there are more records than returned in the response. You can use
     * the <code>NextToken</code> in the subsequent request to fetch the additional
     * descriptions.</p>
     */
    inline DescribeAccountPreferencesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    ResourceIdPreference m_resourceIdPreference;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
