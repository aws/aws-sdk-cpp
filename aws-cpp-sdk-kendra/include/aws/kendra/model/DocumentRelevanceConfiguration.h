/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/Relevance.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Overrides the document relevance properties of a custom index
   * field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DocumentRelevanceConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API DocumentRelevanceConfiguration
  {
  public:
    DocumentRelevanceConfiguration();
    DocumentRelevanceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    DocumentRelevanceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the tuning configuration to override document relevance at the
     * index level.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the tuning configuration to override document relevance at the
     * index level.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the tuning configuration to override document relevance at the
     * index level.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the tuning configuration to override document relevance at the
     * index level.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the tuning configuration to override document relevance at the
     * index level.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the tuning configuration to override document relevance at the
     * index level.</p>
     */
    inline DocumentRelevanceConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the tuning configuration to override document relevance at the
     * index level.</p>
     */
    inline DocumentRelevanceConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the tuning configuration to override document relevance at the
     * index level.</p>
     */
    inline DocumentRelevanceConfiguration& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Relevance& GetRelevance() const{ return m_relevance; }

    
    inline bool RelevanceHasBeenSet() const { return m_relevanceHasBeenSet; }

    
    inline void SetRelevance(const Relevance& value) { m_relevanceHasBeenSet = true; m_relevance = value; }

    
    inline void SetRelevance(Relevance&& value) { m_relevanceHasBeenSet = true; m_relevance = std::move(value); }

    
    inline DocumentRelevanceConfiguration& WithRelevance(const Relevance& value) { SetRelevance(value); return *this;}

    
    inline DocumentRelevanceConfiguration& WithRelevance(Relevance&& value) { SetRelevance(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Relevance m_relevance;
    bool m_relevanceHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
