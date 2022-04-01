﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/model/ReplicationRule.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>The replication configuration for a registry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ReplicationConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ECR_API ReplicationConfiguration
  {
  public:
    ReplicationConfiguration();
    ReplicationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ReplicationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of objects representing the replication destinations and repository
     * filters for a replication configuration.</p>
     */
    inline const Aws::Vector<ReplicationRule>& GetRules() const{ return m_rules; }

    /**
     * <p>An array of objects representing the replication destinations and repository
     * filters for a replication configuration.</p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>An array of objects representing the replication destinations and repository
     * filters for a replication configuration.</p>
     */
    inline void SetRules(const Aws::Vector<ReplicationRule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>An array of objects representing the replication destinations and repository
     * filters for a replication configuration.</p>
     */
    inline void SetRules(Aws::Vector<ReplicationRule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>An array of objects representing the replication destinations and repository
     * filters for a replication configuration.</p>
     */
    inline ReplicationConfiguration& WithRules(const Aws::Vector<ReplicationRule>& value) { SetRules(value); return *this;}

    /**
     * <p>An array of objects representing the replication destinations and repository
     * filters for a replication configuration.</p>
     */
    inline ReplicationConfiguration& WithRules(Aws::Vector<ReplicationRule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>An array of objects representing the replication destinations and repository
     * filters for a replication configuration.</p>
     */
    inline ReplicationConfiguration& AddRules(const ReplicationRule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>An array of objects representing the replication destinations and repository
     * filters for a replication configuration.</p>
     */
    inline ReplicationConfiguration& AddRules(ReplicationRule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ReplicationRule> m_rules;
    bool m_rulesHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
