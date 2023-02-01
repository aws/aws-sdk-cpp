/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/GroupOrderingIdSummary.h>
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
namespace kendra
{
namespace Model
{
  class DescribePrincipalMappingResult
  {
  public:
    AWS_KENDRA_API DescribePrincipalMappingResult();
    AWS_KENDRA_API DescribePrincipalMappingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API DescribePrincipalMappingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Shows the identifier of the index to see information on the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>Shows the identifier of the index to see information on the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexId = value; }

    /**
     * <p>Shows the identifier of the index to see information on the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexId = std::move(value); }

    /**
     * <p>Shows the identifier of the index to see information on the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline void SetIndexId(const char* value) { m_indexId.assign(value); }

    /**
     * <p>Shows the identifier of the index to see information on the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline DescribePrincipalMappingResult& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>Shows the identifier of the index to see information on the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline DescribePrincipalMappingResult& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>Shows the identifier of the index to see information on the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline DescribePrincipalMappingResult& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>Shows the identifier of the data source to see information on the processing
     * of <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>Shows the identifier of the data source to see information on the processing
     * of <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceId = value; }

    /**
     * <p>Shows the identifier of the data source to see information on the processing
     * of <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceId = std::move(value); }

    /**
     * <p>Shows the identifier of the data source to see information on the processing
     * of <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceId.assign(value); }

    /**
     * <p>Shows the identifier of the data source to see information on the processing
     * of <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline DescribePrincipalMappingResult& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>Shows the identifier of the data source to see information on the processing
     * of <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline DescribePrincipalMappingResult& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>Shows the identifier of the data source to see information on the processing
     * of <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline DescribePrincipalMappingResult& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>Shows the identifier of the group to see information on the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>Shows the identifier of the group to see information on the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupId = value; }

    /**
     * <p>Shows the identifier of the group to see information on the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupId = std::move(value); }

    /**
     * <p>Shows the identifier of the group to see information on the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline void SetGroupId(const char* value) { m_groupId.assign(value); }

    /**
     * <p>Shows the identifier of the group to see information on the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline DescribePrincipalMappingResult& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>Shows the identifier of the group to see information on the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline DescribePrincipalMappingResult& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>Shows the identifier of the group to see information on the processing of
     * <code>PUT</code> and <code>DELETE</code> actions for mapping users to their
     * groups.</p>
     */
    inline DescribePrincipalMappingResult& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>Shows the following information on the processing of <code>PUT</code> and
     * <code>DELETE</code> actions for mapping users to their groups:</p> <ul> <li>
     * <p>Status – the status can be either <code>PROCESSING</code>,
     * <code>SUCCEEDED</code>, <code>DELETING</code>, <code>DELETED</code>, or
     * <code>FAILED</code>.</p> </li> <li> <p>Last updated – the last date-time an
     * action was updated.</p> </li> <li> <p>Received – the last date-time an action
     * was received or submitted.</p> </li> <li> <p>Ordering ID – the latest action
     * that should process and apply after other actions.</p> </li> <li> <p>Failure
     * reason – the reason an action could not be processed.</p> </li> </ul>
     */
    inline const Aws::Vector<GroupOrderingIdSummary>& GetGroupOrderingIdSummaries() const{ return m_groupOrderingIdSummaries; }

    /**
     * <p>Shows the following information on the processing of <code>PUT</code> and
     * <code>DELETE</code> actions for mapping users to their groups:</p> <ul> <li>
     * <p>Status – the status can be either <code>PROCESSING</code>,
     * <code>SUCCEEDED</code>, <code>DELETING</code>, <code>DELETED</code>, or
     * <code>FAILED</code>.</p> </li> <li> <p>Last updated – the last date-time an
     * action was updated.</p> </li> <li> <p>Received – the last date-time an action
     * was received or submitted.</p> </li> <li> <p>Ordering ID – the latest action
     * that should process and apply after other actions.</p> </li> <li> <p>Failure
     * reason – the reason an action could not be processed.</p> </li> </ul>
     */
    inline void SetGroupOrderingIdSummaries(const Aws::Vector<GroupOrderingIdSummary>& value) { m_groupOrderingIdSummaries = value; }

    /**
     * <p>Shows the following information on the processing of <code>PUT</code> and
     * <code>DELETE</code> actions for mapping users to their groups:</p> <ul> <li>
     * <p>Status – the status can be either <code>PROCESSING</code>,
     * <code>SUCCEEDED</code>, <code>DELETING</code>, <code>DELETED</code>, or
     * <code>FAILED</code>.</p> </li> <li> <p>Last updated – the last date-time an
     * action was updated.</p> </li> <li> <p>Received – the last date-time an action
     * was received or submitted.</p> </li> <li> <p>Ordering ID – the latest action
     * that should process and apply after other actions.</p> </li> <li> <p>Failure
     * reason – the reason an action could not be processed.</p> </li> </ul>
     */
    inline void SetGroupOrderingIdSummaries(Aws::Vector<GroupOrderingIdSummary>&& value) { m_groupOrderingIdSummaries = std::move(value); }

    /**
     * <p>Shows the following information on the processing of <code>PUT</code> and
     * <code>DELETE</code> actions for mapping users to their groups:</p> <ul> <li>
     * <p>Status – the status can be either <code>PROCESSING</code>,
     * <code>SUCCEEDED</code>, <code>DELETING</code>, <code>DELETED</code>, or
     * <code>FAILED</code>.</p> </li> <li> <p>Last updated – the last date-time an
     * action was updated.</p> </li> <li> <p>Received – the last date-time an action
     * was received or submitted.</p> </li> <li> <p>Ordering ID – the latest action
     * that should process and apply after other actions.</p> </li> <li> <p>Failure
     * reason – the reason an action could not be processed.</p> </li> </ul>
     */
    inline DescribePrincipalMappingResult& WithGroupOrderingIdSummaries(const Aws::Vector<GroupOrderingIdSummary>& value) { SetGroupOrderingIdSummaries(value); return *this;}

    /**
     * <p>Shows the following information on the processing of <code>PUT</code> and
     * <code>DELETE</code> actions for mapping users to their groups:</p> <ul> <li>
     * <p>Status – the status can be either <code>PROCESSING</code>,
     * <code>SUCCEEDED</code>, <code>DELETING</code>, <code>DELETED</code>, or
     * <code>FAILED</code>.</p> </li> <li> <p>Last updated – the last date-time an
     * action was updated.</p> </li> <li> <p>Received – the last date-time an action
     * was received or submitted.</p> </li> <li> <p>Ordering ID – the latest action
     * that should process and apply after other actions.</p> </li> <li> <p>Failure
     * reason – the reason an action could not be processed.</p> </li> </ul>
     */
    inline DescribePrincipalMappingResult& WithGroupOrderingIdSummaries(Aws::Vector<GroupOrderingIdSummary>&& value) { SetGroupOrderingIdSummaries(std::move(value)); return *this;}

    /**
     * <p>Shows the following information on the processing of <code>PUT</code> and
     * <code>DELETE</code> actions for mapping users to their groups:</p> <ul> <li>
     * <p>Status – the status can be either <code>PROCESSING</code>,
     * <code>SUCCEEDED</code>, <code>DELETING</code>, <code>DELETED</code>, or
     * <code>FAILED</code>.</p> </li> <li> <p>Last updated – the last date-time an
     * action was updated.</p> </li> <li> <p>Received – the last date-time an action
     * was received or submitted.</p> </li> <li> <p>Ordering ID – the latest action
     * that should process and apply after other actions.</p> </li> <li> <p>Failure
     * reason – the reason an action could not be processed.</p> </li> </ul>
     */
    inline DescribePrincipalMappingResult& AddGroupOrderingIdSummaries(const GroupOrderingIdSummary& value) { m_groupOrderingIdSummaries.push_back(value); return *this; }

    /**
     * <p>Shows the following information on the processing of <code>PUT</code> and
     * <code>DELETE</code> actions for mapping users to their groups:</p> <ul> <li>
     * <p>Status – the status can be either <code>PROCESSING</code>,
     * <code>SUCCEEDED</code>, <code>DELETING</code>, <code>DELETED</code>, or
     * <code>FAILED</code>.</p> </li> <li> <p>Last updated – the last date-time an
     * action was updated.</p> </li> <li> <p>Received – the last date-time an action
     * was received or submitted.</p> </li> <li> <p>Ordering ID – the latest action
     * that should process and apply after other actions.</p> </li> <li> <p>Failure
     * reason – the reason an action could not be processed.</p> </li> </ul>
     */
    inline DescribePrincipalMappingResult& AddGroupOrderingIdSummaries(GroupOrderingIdSummary&& value) { m_groupOrderingIdSummaries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_indexId;

    Aws::String m_dataSourceId;

    Aws::String m_groupId;

    Aws::Vector<GroupOrderingIdSummary> m_groupOrderingIdSummaries;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
