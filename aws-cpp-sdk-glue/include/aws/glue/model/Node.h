/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>A node represents an AWS Glue component like Trigger, Job etc. which is part
   * of a workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Node">AWS API
   * Reference</a></p>
   */
  class AWS_GLUE_API Node
  {
  public:
    Node();
    Node(Aws::Utils::Json::JsonView jsonValue);
    Node& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of AWS Glue component represented by the node.</p>
     */
    inline const NodeType& GetType() const{ return m_type; }

    /**
     * <p>The type of AWS Glue component represented by the node.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of AWS Glue component represented by the node.</p>
     */
    inline void SetType(const NodeType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of AWS Glue component represented by the node.</p>
     */
    inline void SetType(NodeType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of AWS Glue component represented by the node.</p>
     */
    inline Node& WithType(const NodeType& value) { SetType(value); return *this;}

    /**
     * <p>The type of AWS Glue component represented by the node.</p>
     */
    inline Node& WithType(NodeType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the AWS Glue component represented by the node.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the AWS Glue component represented by the node.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the AWS Glue component represented by the node.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the AWS Glue component represented by the node.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the AWS Glue component represented by the node.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the AWS Glue component represented by the node.</p>
     */
    inline Node& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the AWS Glue component represented by the node.</p>
     */
    inline Node& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS Glue component represented by the node.</p>
     */
    inline Node& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The unique Id assigned to the node within the workflow.</p>
     */
    inline const Aws::String& GetUniqueId() const{ return m_uniqueId; }

    /**
     * <p>The unique Id assigned to the node within the workflow.</p>
     */
    inline bool UniqueIdHasBeenSet() const { return m_uniqueIdHasBeenSet; }

    /**
     * <p>The unique Id assigned to the node within the workflow.</p>
     */
    inline void SetUniqueId(const Aws::String& value) { m_uniqueIdHasBeenSet = true; m_uniqueId = value; }

    /**
     * <p>The unique Id assigned to the node within the workflow.</p>
     */
    inline void SetUniqueId(Aws::String&& value) { m_uniqueIdHasBeenSet = true; m_uniqueId = std::move(value); }

    /**
     * <p>The unique Id assigned to the node within the workflow.</p>
     */
    inline void SetUniqueId(const char* value) { m_uniqueIdHasBeenSet = true; m_uniqueId.assign(value); }

    /**
     * <p>The unique Id assigned to the node within the workflow.</p>
     */
    inline Node& WithUniqueId(const Aws::String& value) { SetUniqueId(value); return *this;}

    /**
     * <p>The unique Id assigned to the node within the workflow.</p>
     */
    inline Node& WithUniqueId(Aws::String&& value) { SetUniqueId(std::move(value)); return *this;}

    /**
     * <p>The unique Id assigned to the node within the workflow.</p>
     */
    inline Node& WithUniqueId(const char* value) { SetUniqueId(value); return *this;}


    /**
     * <p>Details of the Trigger when the node represents a Trigger.</p>
     */
    inline const TriggerNodeDetails& GetTriggerDetails() const{ return m_triggerDetails; }

    /**
     * <p>Details of the Trigger when the node represents a Trigger.</p>
     */
    inline bool TriggerDetailsHasBeenSet() const { return m_triggerDetailsHasBeenSet; }

    /**
     * <p>Details of the Trigger when the node represents a Trigger.</p>
     */
    inline void SetTriggerDetails(const TriggerNodeDetails& value) { m_triggerDetailsHasBeenSet = true; m_triggerDetails = value; }

    /**
     * <p>Details of the Trigger when the node represents a Trigger.</p>
     */
    inline void SetTriggerDetails(TriggerNodeDetails&& value) { m_triggerDetailsHasBeenSet = true; m_triggerDetails = std::move(value); }

    /**
     * <p>Details of the Trigger when the node represents a Trigger.</p>
     */
    inline Node& WithTriggerDetails(const TriggerNodeDetails& value) { SetTriggerDetails(value); return *this;}

    /**
     * <p>Details of the Trigger when the node represents a Trigger.</p>
     */
    inline Node& WithTriggerDetails(TriggerNodeDetails&& value) { SetTriggerDetails(std::move(value)); return *this;}


    /**
     * <p>Details of the Job when the node represents a Job.</p>
     */
    inline const JobNodeDetails& GetJobDetails() const{ return m_jobDetails; }

    /**
     * <p>Details of the Job when the node represents a Job.</p>
     */
    inline bool JobDetailsHasBeenSet() const { return m_jobDetailsHasBeenSet; }

    /**
     * <p>Details of the Job when the node represents a Job.</p>
     */
    inline void SetJobDetails(const JobNodeDetails& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = value; }

    /**
     * <p>Details of the Job when the node represents a Job.</p>
     */
    inline void SetJobDetails(JobNodeDetails&& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = std::move(value); }

    /**
     * <p>Details of the Job when the node represents a Job.</p>
     */
    inline Node& WithJobDetails(const JobNodeDetails& value) { SetJobDetails(value); return *this;}

    /**
     * <p>Details of the Job when the node represents a Job.</p>
     */
    inline Node& WithJobDetails(JobNodeDetails&& value) { SetJobDetails(std::move(value)); return *this;}


    /**
     * <p>Details of the crawler when the node represents a crawler.</p>
     */
    inline const CrawlerNodeDetails& GetCrawlerDetails() const{ return m_crawlerDetails; }

    /**
     * <p>Details of the crawler when the node represents a crawler.</p>
     */
    inline bool CrawlerDetailsHasBeenSet() const { return m_crawlerDetailsHasBeenSet; }

    /**
     * <p>Details of the crawler when the node represents a crawler.</p>
     */
    inline void SetCrawlerDetails(const CrawlerNodeDetails& value) { m_crawlerDetailsHasBeenSet = true; m_crawlerDetails = value; }

    /**
     * <p>Details of the crawler when the node represents a crawler.</p>
     */
    inline void SetCrawlerDetails(CrawlerNodeDetails&& value) { m_crawlerDetailsHasBeenSet = true; m_crawlerDetails = std::move(value); }

    /**
     * <p>Details of the crawler when the node represents a crawler.</p>
     */
    inline Node& WithCrawlerDetails(const CrawlerNodeDetails& value) { SetCrawlerDetails(value); return *this;}

    /**
     * <p>Details of the crawler when the node represents a crawler.</p>
     */
    inline Node& WithCrawlerDetails(CrawlerNodeDetails&& value) { SetCrawlerDetails(std::move(value)); return *this;}

  private:

    NodeType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_uniqueId;
    bool m_uniqueIdHasBeenSet;

    TriggerNodeDetails m_triggerDetails;
    bool m_triggerDetailsHasBeenSet;

    JobNodeDetails m_jobDetails;
    bool m_jobDetailsHasBeenSet;

    CrawlerNodeDetails m_crawlerDetails;
    bool m_crawlerDetailsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
