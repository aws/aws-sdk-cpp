/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amp/model/RuleGroupsNamespaceStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace PrometheusService
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>CreateRuleGroupsNamespace</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateRuleGroupsNamespaceResponse">AWS
   * API Reference</a></p>
   */
  class CreateRuleGroupsNamespaceResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API CreateRuleGroupsNamespaceResult();
    AWS_PROMETHEUSSERVICE_API CreateRuleGroupsNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API CreateRuleGroupsNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the new rule groups namespace.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new rule groups namespace.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new rule groups namespace.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new rule groups namespace.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new rule groups namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new rule groups namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new rule groups namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the new rule groups namespace.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the new rule groups namespace.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the new rule groups namespace.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the new rule groups namespace.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the new rule groups namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the new rule groups namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the new rule groups namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A structure that returns the current status of the rule groups namespace.</p>
     */
    inline const RuleGroupsNamespaceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A structure that returns the current status of the rule groups namespace.</p>
     */
    inline void SetStatus(const RuleGroupsNamespaceStatus& value) { m_status = value; }

    /**
     * <p>A structure that returns the current status of the rule groups namespace.</p>
     */
    inline void SetStatus(RuleGroupsNamespaceStatus&& value) { m_status = std::move(value); }

    /**
     * <p>A structure that returns the current status of the rule groups namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& WithStatus(const RuleGroupsNamespaceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A structure that returns the current status of the rule groups namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& WithStatus(RuleGroupsNamespaceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The list of tag keys and values that are associated with the namespace.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tag keys and values that are associated with the namespace.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The list of tag keys and values that are associated with the namespace.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The list of tag keys and values that are associated with the namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tag keys and values that are associated with the namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tag keys and values that are associated with the namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of tag keys and values that are associated with the namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tag keys and values that are associated with the namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values that are associated with the namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values that are associated with the namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values that are associated with the namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tag keys and values that are associated with the namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateRuleGroupsNamespaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateRuleGroupsNamespaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateRuleGroupsNamespaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_name;

    RuleGroupsNamespaceStatus m_status;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
