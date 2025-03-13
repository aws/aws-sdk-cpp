/**
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
    AWS_GLUE_API Node() = default;
    AWS_GLUE_API Node(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Node& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of Glue component represented by the node.</p>
     */
    inline NodeType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(NodeType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Node& WithType(NodeType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Glue component represented by the node.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Node& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique Id assigned to the node within the workflow.</p>
     */
    inline const Aws::String& GetUniqueId() const { return m_uniqueId; }
    inline bool UniqueIdHasBeenSet() const { return m_uniqueIdHasBeenSet; }
    template<typename UniqueIdT = Aws::String>
    void SetUniqueId(UniqueIdT&& value) { m_uniqueIdHasBeenSet = true; m_uniqueId = std::forward<UniqueIdT>(value); }
    template<typename UniqueIdT = Aws::String>
    Node& WithUniqueId(UniqueIdT&& value) { SetUniqueId(std::forward<UniqueIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the Trigger when the node represents a Trigger.</p>
     */
    inline const TriggerNodeDetails& GetTriggerDetails() const { return m_triggerDetails; }
    inline bool TriggerDetailsHasBeenSet() const { return m_triggerDetailsHasBeenSet; }
    template<typename TriggerDetailsT = TriggerNodeDetails>
    void SetTriggerDetails(TriggerDetailsT&& value) { m_triggerDetailsHasBeenSet = true; m_triggerDetails = std::forward<TriggerDetailsT>(value); }
    template<typename TriggerDetailsT = TriggerNodeDetails>
    Node& WithTriggerDetails(TriggerDetailsT&& value) { SetTriggerDetails(std::forward<TriggerDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the Job when the node represents a Job.</p>
     */
    inline const JobNodeDetails& GetJobDetails() const { return m_jobDetails; }
    inline bool JobDetailsHasBeenSet() const { return m_jobDetailsHasBeenSet; }
    template<typename JobDetailsT = JobNodeDetails>
    void SetJobDetails(JobDetailsT&& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = std::forward<JobDetailsT>(value); }
    template<typename JobDetailsT = JobNodeDetails>
    Node& WithJobDetails(JobDetailsT&& value) { SetJobDetails(std::forward<JobDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the crawler when the node represents a crawler.</p>
     */
    inline const CrawlerNodeDetails& GetCrawlerDetails() const { return m_crawlerDetails; }
    inline bool CrawlerDetailsHasBeenSet() const { return m_crawlerDetailsHasBeenSet; }
    template<typename CrawlerDetailsT = CrawlerNodeDetails>
    void SetCrawlerDetails(CrawlerDetailsT&& value) { m_crawlerDetailsHasBeenSet = true; m_crawlerDetails = std::forward<CrawlerDetailsT>(value); }
    template<typename CrawlerDetailsT = CrawlerNodeDetails>
    Node& WithCrawlerDetails(CrawlerDetailsT&& value) { SetCrawlerDetails(std::forward<CrawlerDetailsT>(value)); return *this;}
    ///@}
  private:

    NodeType m_type{NodeType::NOT_SET};
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
