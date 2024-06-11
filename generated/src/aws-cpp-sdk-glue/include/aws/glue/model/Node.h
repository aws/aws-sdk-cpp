﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/NodeType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TriggerNodeDetails.h>
#include <aws/glue/model/JobNodeDetails.h>
#include <aws/glue/model/CrawlerNodeDetails.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A node represents an Glue component (trigger, crawler, or job) on a workflow
   * graph.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Node">AWS API
   * Reference</a></p>
   */
  class Node
  {
  public:
    AWS_GLUE_API Node();
    AWS_GLUE_API Node(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Node& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of Glue component represented by the node.</p>
     */
    inline const NodeType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const NodeType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(NodeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Node& WithType(const NodeType& value) { SetType(value); return *this;}
    inline Node& WithType(NodeType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Glue component represented by the node.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Node& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Node& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Node& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique Id assigned to the node within the workflow.</p>
     */
    inline const Aws::String& GetUniqueId() const{ return m_uniqueId; }
    inline bool UniqueIdHasBeenSet() const { return m_uniqueIdHasBeenSet; }
    inline void SetUniqueId(const Aws::String& value) { m_uniqueIdHasBeenSet = true; m_uniqueId = value; }
    inline void SetUniqueId(Aws::String&& value) { m_uniqueIdHasBeenSet = true; m_uniqueId = std::move(value); }
    inline void SetUniqueId(const char* value) { m_uniqueIdHasBeenSet = true; m_uniqueId.assign(value); }
    inline Node& WithUniqueId(const Aws::String& value) { SetUniqueId(value); return *this;}
    inline Node& WithUniqueId(Aws::String&& value) { SetUniqueId(std::move(value)); return *this;}
    inline Node& WithUniqueId(const char* value) { SetUniqueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the Trigger when the node represents a Trigger.</p>
     */
    inline const TriggerNodeDetails& GetTriggerDetails() const{ return m_triggerDetails; }
    inline bool TriggerDetailsHasBeenSet() const { return m_triggerDetailsHasBeenSet; }
    inline void SetTriggerDetails(const TriggerNodeDetails& value) { m_triggerDetailsHasBeenSet = true; m_triggerDetails = value; }
    inline void SetTriggerDetails(TriggerNodeDetails&& value) { m_triggerDetailsHasBeenSet = true; m_triggerDetails = std::move(value); }
    inline Node& WithTriggerDetails(const TriggerNodeDetails& value) { SetTriggerDetails(value); return *this;}
    inline Node& WithTriggerDetails(TriggerNodeDetails&& value) { SetTriggerDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the Job when the node represents a Job.</p>
     */
    inline const JobNodeDetails& GetJobDetails() const{ return m_jobDetails; }
    inline bool JobDetailsHasBeenSet() const { return m_jobDetailsHasBeenSet; }
    inline void SetJobDetails(const JobNodeDetails& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = value; }
    inline void SetJobDetails(JobNodeDetails&& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = std::move(value); }
    inline Node& WithJobDetails(const JobNodeDetails& value) { SetJobDetails(value); return *this;}
    inline Node& WithJobDetails(JobNodeDetails&& value) { SetJobDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the crawler when the node represents a crawler.</p>
     */
    inline const CrawlerNodeDetails& GetCrawlerDetails() const{ return m_crawlerDetails; }
    inline bool CrawlerDetailsHasBeenSet() const { return m_crawlerDetailsHasBeenSet; }
    inline void SetCrawlerDetails(const CrawlerNodeDetails& value) { m_crawlerDetailsHasBeenSet = true; m_crawlerDetails = value; }
    inline void SetCrawlerDetails(CrawlerNodeDetails&& value) { m_crawlerDetailsHasBeenSet = true; m_crawlerDetails = std::move(value); }
    inline Node& WithCrawlerDetails(const CrawlerNodeDetails& value) { SetCrawlerDetails(value); return *this;}
    inline Node& WithCrawlerDetails(CrawlerNodeDetails&& value) { SetCrawlerDetails(std::move(value)); return *this;}
    ///@}
  private:

    NodeType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_uniqueId;
    bool m_uniqueIdHasBeenSet = false;

    TriggerNodeDetails m_triggerDetails;
    bool m_triggerDetailsHasBeenSet = false;

    JobNodeDetails m_jobDetails;
    bool m_jobDetailsHasBeenSet = false;

    CrawlerNodeDetails m_crawlerDetails;
    bool m_crawlerDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
