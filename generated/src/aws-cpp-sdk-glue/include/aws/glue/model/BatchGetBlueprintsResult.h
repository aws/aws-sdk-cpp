/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/Blueprint.h>
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
namespace Glue
{
namespace Model
{
  class BatchGetBlueprintsResult
  {
  public:
    AWS_GLUE_API BatchGetBlueprintsResult();
    AWS_GLUE_API BatchGetBlueprintsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchGetBlueprintsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a list of blueprint as a <code>Blueprints</code> object.</p>
     */
    inline const Aws::Vector<Blueprint>& GetBlueprints() const{ return m_blueprints; }

    /**
     * <p>Returns a list of blueprint as a <code>Blueprints</code> object.</p>
     */
    inline void SetBlueprints(const Aws::Vector<Blueprint>& value) { m_blueprints = value; }

    /**
     * <p>Returns a list of blueprint as a <code>Blueprints</code> object.</p>
     */
    inline void SetBlueprints(Aws::Vector<Blueprint>&& value) { m_blueprints = std::move(value); }

    /**
     * <p>Returns a list of blueprint as a <code>Blueprints</code> object.</p>
     */
    inline BatchGetBlueprintsResult& WithBlueprints(const Aws::Vector<Blueprint>& value) { SetBlueprints(value); return *this;}

    /**
     * <p>Returns a list of blueprint as a <code>Blueprints</code> object.</p>
     */
    inline BatchGetBlueprintsResult& WithBlueprints(Aws::Vector<Blueprint>&& value) { SetBlueprints(std::move(value)); return *this;}

    /**
     * <p>Returns a list of blueprint as a <code>Blueprints</code> object.</p>
     */
    inline BatchGetBlueprintsResult& AddBlueprints(const Blueprint& value) { m_blueprints.push_back(value); return *this; }

    /**
     * <p>Returns a list of blueprint as a <code>Blueprints</code> object.</p>
     */
    inline BatchGetBlueprintsResult& AddBlueprints(Blueprint&& value) { m_blueprints.push_back(std::move(value)); return *this; }


    /**
     * <p>Returns a list of <code>BlueprintNames</code> that were not found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMissingBlueprints() const{ return m_missingBlueprints; }

    /**
     * <p>Returns a list of <code>BlueprintNames</code> that were not found.</p>
     */
    inline void SetMissingBlueprints(const Aws::Vector<Aws::String>& value) { m_missingBlueprints = value; }

    /**
     * <p>Returns a list of <code>BlueprintNames</code> that were not found.</p>
     */
    inline void SetMissingBlueprints(Aws::Vector<Aws::String>&& value) { m_missingBlueprints = std::move(value); }

    /**
     * <p>Returns a list of <code>BlueprintNames</code> that were not found.</p>
     */
    inline BatchGetBlueprintsResult& WithMissingBlueprints(const Aws::Vector<Aws::String>& value) { SetMissingBlueprints(value); return *this;}

    /**
     * <p>Returns a list of <code>BlueprintNames</code> that were not found.</p>
     */
    inline BatchGetBlueprintsResult& WithMissingBlueprints(Aws::Vector<Aws::String>&& value) { SetMissingBlueprints(std::move(value)); return *this;}

    /**
     * <p>Returns a list of <code>BlueprintNames</code> that were not found.</p>
     */
    inline BatchGetBlueprintsResult& AddMissingBlueprints(const Aws::String& value) { m_missingBlueprints.push_back(value); return *this; }

    /**
     * <p>Returns a list of <code>BlueprintNames</code> that were not found.</p>
     */
    inline BatchGetBlueprintsResult& AddMissingBlueprints(Aws::String&& value) { m_missingBlueprints.push_back(std::move(value)); return *this; }

    /**
     * <p>Returns a list of <code>BlueprintNames</code> that were not found.</p>
     */
    inline BatchGetBlueprintsResult& AddMissingBlueprints(const char* value) { m_missingBlueprints.push_back(value); return *this; }

  private:

    Aws::Vector<Blueprint> m_blueprints;

    Aws::Vector<Aws::String> m_missingBlueprints;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
