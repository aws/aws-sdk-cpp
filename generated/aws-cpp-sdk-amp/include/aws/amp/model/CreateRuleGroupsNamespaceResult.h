﻿/**
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
   * <p>Represents the output of a CreateRuleGroupsNamespace operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateRuleGroupsNamespaceResponse">AWS
   * API Reference</a></p>
   */
  class AWS_PROMETHEUSSERVICE_API CreateRuleGroupsNamespaceResult
  {
  public:
    CreateRuleGroupsNamespaceResult();
    CreateRuleGroupsNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateRuleGroupsNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of this rule groups namespace.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of this rule groups namespace.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of this rule groups namespace.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of this rule groups namespace.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of this rule groups namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of this rule groups namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of this rule groups namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The rule groups namespace name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The rule groups namespace name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The rule groups namespace name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The rule groups namespace name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The rule groups namespace name.</p>
     */
    inline CreateRuleGroupsNamespaceResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The rule groups namespace name.</p>
     */
    inline CreateRuleGroupsNamespaceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The rule groups namespace name.</p>
     */
    inline CreateRuleGroupsNamespaceResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of rule groups namespace.</p>
     */
    inline const RuleGroupsNamespaceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of rule groups namespace.</p>
     */
    inline void SetStatus(const RuleGroupsNamespaceStatus& value) { m_status = value; }

    /**
     * <p>The status of rule groups namespace.</p>
     */
    inline void SetStatus(RuleGroupsNamespaceStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of rule groups namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& WithStatus(const RuleGroupsNamespaceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of rule groups namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& WithStatus(RuleGroupsNamespaceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The tags of this rule groups namespace.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags of this rule groups namespace.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags of this rule groups namespace.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags of this rule groups namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags of this rule groups namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags of this rule groups namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags of this rule groups namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of this rule groups namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of this rule groups namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags of this rule groups namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags of this rule groups namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags of this rule groups namespace.</p>
     */
    inline CreateRuleGroupsNamespaceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    Aws::String m_name;

    RuleGroupsNamespaceStatus m_status;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
