﻿/*
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
   * <p>Specifies a key value pair for a resource tag.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/Tag">AWS API
   * Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API Tag
  {
  public:
    Tag();
    Tag(Aws::Utils::Json::JsonView jsonValue);
    Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the <code>TagKey</code>, the name of the tag. Tag keys must be
     * unique for the Elasticsearch domain to which they are attached.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>Specifies the <code>TagKey</code>, the name of the tag. Tag keys must be
     * unique for the Elasticsearch domain to which they are attached.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Specifies the <code>TagKey</code>, the name of the tag. Tag keys must be
     * unique for the Elasticsearch domain to which they are attached.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>Specifies the <code>TagKey</code>, the name of the tag. Tag keys must be
     * unique for the Elasticsearch domain to which they are attached.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>Specifies the <code>TagKey</code>, the name of the tag. Tag keys must be
     * unique for the Elasticsearch domain to which they are attached.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>Specifies the <code>TagKey</code>, the name of the tag. Tag keys must be
     * unique for the Elasticsearch domain to which they are attached.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>Specifies the <code>TagKey</code>, the name of the tag. Tag keys must be
     * unique for the Elasticsearch domain to which they are attached.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>Specifies the <code>TagValue</code>, the value assigned to the corresponding
     * tag key. Tag values can be null and do not have to be unique in a tag set. For
     * example, you can have a key value pair in a tag set of <code>project :
     * Trinity</code> and <code>cost-center : Trinity</code></p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Specifies the <code>TagValue</code>, the value assigned to the corresponding
     * tag key. Tag values can be null and do not have to be unique in a tag set. For
     * example, you can have a key value pair in a tag set of <code>project :
     * Trinity</code> and <code>cost-center : Trinity</code></p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Specifies the <code>TagValue</code>, the value assigned to the corresponding
     * tag key. Tag values can be null and do not have to be unique in a tag set. For
     * example, you can have a key value pair in a tag set of <code>project :
     * Trinity</code> and <code>cost-center : Trinity</code></p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Specifies the <code>TagValue</code>, the value assigned to the corresponding
     * tag key. Tag values can be null and do not have to be unique in a tag set. For
     * example, you can have a key value pair in a tag set of <code>project :
     * Trinity</code> and <code>cost-center : Trinity</code></p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Specifies the <code>TagValue</code>, the value assigned to the corresponding
     * tag key. Tag values can be null and do not have to be unique in a tag set. For
     * example, you can have a key value pair in a tag set of <code>project :
     * Trinity</code> and <code>cost-center : Trinity</code></p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Specifies the <code>TagValue</code>, the value assigned to the corresponding
     * tag key. Tag values can be null and do not have to be unique in a tag set. For
     * example, you can have a key value pair in a tag set of <code>project :
     * Trinity</code> and <code>cost-center : Trinity</code></p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Specifies the <code>TagValue</code>, the value assigned to the corresponding
     * tag key. Tag values can be null and do not have to be unique in a tag set. For
     * example, you can have a key value pair in a tag set of <code>project :
     * Trinity</code> and <code>cost-center : Trinity</code></p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
