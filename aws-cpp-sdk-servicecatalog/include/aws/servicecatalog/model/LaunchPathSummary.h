﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/ConstraintSummary.h>
#include <aws/servicecatalog/model/Tag.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Summary information about a path for a user to have access to a specified
   * product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/LaunchPathSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API LaunchPathSummary
  {
  public:
    LaunchPathSummary();
    LaunchPathSummary(const Aws::Utils::Json::JsonValue& jsonValue);
    LaunchPathSummary& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The unique identifier of the product path.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the product path.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier of the product path.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier of the product path.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier of the product path.</p>
     */
    inline LaunchPathSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the product path.</p>
     */
    inline LaunchPathSummary& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the product path.</p>
     */
    inline LaunchPathSummary& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>List of constraints on the portfolio-product relationship.</p>
     */
    inline const Aws::Vector<ConstraintSummary>& GetConstraintSummaries() const{ return m_constraintSummaries; }

    /**
     * <p>List of constraints on the portfolio-product relationship.</p>
     */
    inline void SetConstraintSummaries(const Aws::Vector<ConstraintSummary>& value) { m_constraintSummariesHasBeenSet = true; m_constraintSummaries = value; }

    /**
     * <p>List of constraints on the portfolio-product relationship.</p>
     */
    inline void SetConstraintSummaries(Aws::Vector<ConstraintSummary>&& value) { m_constraintSummariesHasBeenSet = true; m_constraintSummaries = value; }

    /**
     * <p>List of constraints on the portfolio-product relationship.</p>
     */
    inline LaunchPathSummary& WithConstraintSummaries(const Aws::Vector<ConstraintSummary>& value) { SetConstraintSummaries(value); return *this;}

    /**
     * <p>List of constraints on the portfolio-product relationship.</p>
     */
    inline LaunchPathSummary& WithConstraintSummaries(Aws::Vector<ConstraintSummary>&& value) { SetConstraintSummaries(value); return *this;}

    /**
     * <p>List of constraints on the portfolio-product relationship.</p>
     */
    inline LaunchPathSummary& AddConstraintSummaries(const ConstraintSummary& value) { m_constraintSummariesHasBeenSet = true; m_constraintSummaries.push_back(value); return *this; }

    /**
     * <p>List of constraints on the portfolio-product relationship.</p>
     */
    inline LaunchPathSummary& AddConstraintSummaries(ConstraintSummary&& value) { m_constraintSummariesHasBeenSet = true; m_constraintSummaries.push_back(value); return *this; }

    /**
     * <p>List of tags used by this launch path.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>List of tags used by this launch path.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>List of tags used by this launch path.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>List of tags used by this launch path.</p>
     */
    inline LaunchPathSummary& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>List of tags used by this launch path.</p>
     */
    inline LaunchPathSummary& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>List of tags used by this launch path.</p>
     */
    inline LaunchPathSummary& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>List of tags used by this launch path.</p>
     */
    inline LaunchPathSummary& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Corresponds to the name of the portfolio to which the user was assigned.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Corresponds to the name of the portfolio to which the user was assigned.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Corresponds to the name of the portfolio to which the user was assigned.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Corresponds to the name of the portfolio to which the user was assigned.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Corresponds to the name of the portfolio to which the user was assigned.</p>
     */
    inline LaunchPathSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Corresponds to the name of the portfolio to which the user was assigned.</p>
     */
    inline LaunchPathSummary& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Corresponds to the name of the portfolio to which the user was assigned.</p>
     */
    inline LaunchPathSummary& WithName(const char* value) { SetName(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::Vector<ConstraintSummary> m_constraintSummaries;
    bool m_constraintSummariesHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
