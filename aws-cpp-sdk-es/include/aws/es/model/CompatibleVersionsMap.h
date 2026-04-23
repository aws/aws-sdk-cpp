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
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p> A map from an <code> <a>ElasticsearchVersion</a> </code> to a list of
   * compatible <code> <a>ElasticsearchVersion</a> </code> s to which the domain can
   * be upgraded. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/CompatibleVersionsMap">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API CompatibleVersionsMap
  {
  public:
    CompatibleVersionsMap();
    CompatibleVersionsMap(Aws::Utils::Json::JsonView jsonValue);
    CompatibleVersionsMap& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current version of Elasticsearch on which a domain is.</p>
     */
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }

    /**
     * <p>The current version of Elasticsearch on which a domain is.</p>
     */
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }

    /**
     * <p>The current version of Elasticsearch on which a domain is.</p>
     */
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }

    /**
     * <p>The current version of Elasticsearch on which a domain is.</p>
     */
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::move(value); }

    /**
     * <p>The current version of Elasticsearch on which a domain is.</p>
     */
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }

    /**
     * <p>The current version of Elasticsearch on which a domain is.</p>
     */
    inline CompatibleVersionsMap& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}

    /**
     * <p>The current version of Elasticsearch on which a domain is.</p>
     */
    inline CompatibleVersionsMap& WithSourceVersion(Aws::String&& value) { SetSourceVersion(std::move(value)); return *this;}

    /**
     * <p>The current version of Elasticsearch on which a domain is.</p>
     */
    inline CompatibleVersionsMap& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetTargetVersions() const{ return m_targetVersions; }

    
    inline bool TargetVersionsHasBeenSet() const { return m_targetVersionsHasBeenSet; }

    
    inline void SetTargetVersions(const Aws::Vector<Aws::String>& value) { m_targetVersionsHasBeenSet = true; m_targetVersions = value; }

    
    inline void SetTargetVersions(Aws::Vector<Aws::String>&& value) { m_targetVersionsHasBeenSet = true; m_targetVersions = std::move(value); }

    
    inline CompatibleVersionsMap& WithTargetVersions(const Aws::Vector<Aws::String>& value) { SetTargetVersions(value); return *this;}

    
    inline CompatibleVersionsMap& WithTargetVersions(Aws::Vector<Aws::String>&& value) { SetTargetVersions(std::move(value)); return *this;}

    
    inline CompatibleVersionsMap& AddTargetVersions(const Aws::String& value) { m_targetVersionsHasBeenSet = true; m_targetVersions.push_back(value); return *this; }

    
    inline CompatibleVersionsMap& AddTargetVersions(Aws::String&& value) { m_targetVersionsHasBeenSet = true; m_targetVersions.push_back(std::move(value)); return *this; }

    
    inline CompatibleVersionsMap& AddTargetVersions(const char* value) { m_targetVersionsHasBeenSet = true; m_targetVersions.push_back(value); return *this; }

  private:

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet;

    Aws::Vector<Aws::String> m_targetVersions;
    bool m_targetVersionsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
