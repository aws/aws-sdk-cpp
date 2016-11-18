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
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudSearchDomain
{
namespace Model
{

  /**
   * <p>Information about a document that matches the search request.</p>
   */
  class AWS_CLOUDSEARCHDOMAIN_API Hit
  {
  public:
    Hit();
    Hit(const Aws::Utils::Json::JsonValue& jsonValue);
    Hit& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The document ID of a document that matches the search request.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The document ID of a document that matches the search request.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The document ID of a document that matches the search request.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The document ID of a document that matches the search request.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The document ID of a document that matches the search request.</p>
     */
    inline Hit& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The document ID of a document that matches the search request.</p>
     */
    inline Hit& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The document ID of a document that matches the search request.</p>
     */
    inline Hit& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The fields returned from a document that matches the search request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetFields() const{ return m_fields; }

    /**
     * <p>The fields returned from a document that matches the search request.</p>
     */
    inline void SetFields(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>The fields returned from a document that matches the search request.</p>
     */
    inline void SetFields(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>The fields returned from a document that matches the search request.</p>
     */
    inline Hit& WithFields(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetFields(value); return *this;}

    /**
     * <p>The fields returned from a document that matches the search request.</p>
     */
    inline Hit& WithFields(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetFields(value); return *this;}

    /**
     * <p>The fields returned from a document that matches the search request.</p>
     */
    inline Hit& AddFields(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_fieldsHasBeenSet = true; m_fields[key] = value; return *this; }

    /**
     * <p>The fields returned from a document that matches the search request.</p>
     */
    inline Hit& AddFields(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_fieldsHasBeenSet = true; m_fields[key] = value; return *this; }

    /**
     * <p>The fields returned from a document that matches the search request.</p>
     */
    inline Hit& AddFields(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_fieldsHasBeenSet = true; m_fields[key] = value; return *this; }

    /**
     * <p>The fields returned from a document that matches the search request.</p>
     */
    inline Hit& AddFields(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_fieldsHasBeenSet = true; m_fields[key] = value; return *this; }

    /**
     * <p>The fields returned from a document that matches the search request.</p>
     */
    inline Hit& AddFields(const char* key, Aws::Vector<Aws::String>&& value) { m_fieldsHasBeenSet = true; m_fields[key] = value; return *this; }

    /**
     * <p>The fields returned from a document that matches the search request.</p>
     */
    inline Hit& AddFields(const char* key, const Aws::Vector<Aws::String>& value) { m_fieldsHasBeenSet = true; m_fields[key] = value; return *this; }

    /**
     * <p>The expressions returned from a document that matches the search request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetExprs() const{ return m_exprs; }

    /**
     * <p>The expressions returned from a document that matches the search request.</p>
     */
    inline void SetExprs(const Aws::Map<Aws::String, Aws::String>& value) { m_exprsHasBeenSet = true; m_exprs = value; }

    /**
     * <p>The expressions returned from a document that matches the search request.</p>
     */
    inline void SetExprs(Aws::Map<Aws::String, Aws::String>&& value) { m_exprsHasBeenSet = true; m_exprs = value; }

    /**
     * <p>The expressions returned from a document that matches the search request.</p>
     */
    inline Hit& WithExprs(const Aws::Map<Aws::String, Aws::String>& value) { SetExprs(value); return *this;}

    /**
     * <p>The expressions returned from a document that matches the search request.</p>
     */
    inline Hit& WithExprs(Aws::Map<Aws::String, Aws::String>&& value) { SetExprs(value); return *this;}

    /**
     * <p>The expressions returned from a document that matches the search request.</p>
     */
    inline Hit& AddExprs(const Aws::String& key, const Aws::String& value) { m_exprsHasBeenSet = true; m_exprs[key] = value; return *this; }

    /**
     * <p>The expressions returned from a document that matches the search request.</p>
     */
    inline Hit& AddExprs(Aws::String&& key, const Aws::String& value) { m_exprsHasBeenSet = true; m_exprs[key] = value; return *this; }

    /**
     * <p>The expressions returned from a document that matches the search request.</p>
     */
    inline Hit& AddExprs(const Aws::String& key, Aws::String&& value) { m_exprsHasBeenSet = true; m_exprs[key] = value; return *this; }

    /**
     * <p>The expressions returned from a document that matches the search request.</p>
     */
    inline Hit& AddExprs(Aws::String&& key, Aws::String&& value) { m_exprsHasBeenSet = true; m_exprs[key] = value; return *this; }

    /**
     * <p>The expressions returned from a document that matches the search request.</p>
     */
    inline Hit& AddExprs(const char* key, Aws::String&& value) { m_exprsHasBeenSet = true; m_exprs[key] = value; return *this; }

    /**
     * <p>The expressions returned from a document that matches the search request.</p>
     */
    inline Hit& AddExprs(Aws::String&& key, const char* value) { m_exprsHasBeenSet = true; m_exprs[key] = value; return *this; }

    /**
     * <p>The expressions returned from a document that matches the search request.</p>
     */
    inline Hit& AddExprs(const char* key, const char* value) { m_exprsHasBeenSet = true; m_exprs[key] = value; return *this; }

    /**
     * <p>The highlights returned from a document that matches the search request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHighlights() const{ return m_highlights; }

    /**
     * <p>The highlights returned from a document that matches the search request.</p>
     */
    inline void SetHighlights(const Aws::Map<Aws::String, Aws::String>& value) { m_highlightsHasBeenSet = true; m_highlights = value; }

    /**
     * <p>The highlights returned from a document that matches the search request.</p>
     */
    inline void SetHighlights(Aws::Map<Aws::String, Aws::String>&& value) { m_highlightsHasBeenSet = true; m_highlights = value; }

    /**
     * <p>The highlights returned from a document that matches the search request.</p>
     */
    inline Hit& WithHighlights(const Aws::Map<Aws::String, Aws::String>& value) { SetHighlights(value); return *this;}

    /**
     * <p>The highlights returned from a document that matches the search request.</p>
     */
    inline Hit& WithHighlights(Aws::Map<Aws::String, Aws::String>&& value) { SetHighlights(value); return *this;}

    /**
     * <p>The highlights returned from a document that matches the search request.</p>
     */
    inline Hit& AddHighlights(const Aws::String& key, const Aws::String& value) { m_highlightsHasBeenSet = true; m_highlights[key] = value; return *this; }

    /**
     * <p>The highlights returned from a document that matches the search request.</p>
     */
    inline Hit& AddHighlights(Aws::String&& key, const Aws::String& value) { m_highlightsHasBeenSet = true; m_highlights[key] = value; return *this; }

    /**
     * <p>The highlights returned from a document that matches the search request.</p>
     */
    inline Hit& AddHighlights(const Aws::String& key, Aws::String&& value) { m_highlightsHasBeenSet = true; m_highlights[key] = value; return *this; }

    /**
     * <p>The highlights returned from a document that matches the search request.</p>
     */
    inline Hit& AddHighlights(Aws::String&& key, Aws::String&& value) { m_highlightsHasBeenSet = true; m_highlights[key] = value; return *this; }

    /**
     * <p>The highlights returned from a document that matches the search request.</p>
     */
    inline Hit& AddHighlights(const char* key, Aws::String&& value) { m_highlightsHasBeenSet = true; m_highlights[key] = value; return *this; }

    /**
     * <p>The highlights returned from a document that matches the search request.</p>
     */
    inline Hit& AddHighlights(Aws::String&& key, const char* value) { m_highlightsHasBeenSet = true; m_highlights[key] = value; return *this; }

    /**
     * <p>The highlights returned from a document that matches the search request.</p>
     */
    inline Hit& AddHighlights(const char* key, const char* value) { m_highlightsHasBeenSet = true; m_highlights[key] = value; return *this; }

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_fields;
    bool m_fieldsHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_exprs;
    bool m_exprsHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_highlights;
    bool m_highlightsHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
