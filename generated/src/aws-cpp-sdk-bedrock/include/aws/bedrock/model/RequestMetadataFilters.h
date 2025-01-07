/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/RequestMetadataBaseFilters.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Rules for filtering invocation logs. A filter can be a mapping of a metadata
   * key to a value that it should or should not equal (a base filter), or a list of
   * base filters that are all applied with <code>AND</code> or <code>OR</code>
   * logical operators</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/RequestMetadataFilters">AWS
   * API Reference</a></p>
   */
  class RequestMetadataFilters
  {
  public:
    AWS_BEDROCK_API RequestMetadataFilters();
    AWS_BEDROCK_API RequestMetadataFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API RequestMetadataFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Include results where the key equals the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEquals() const{ return m_equals; }
    inline bool EqualsHasBeenSet() const { return m_equalsHasBeenSet; }
    inline void SetEquals(const Aws::Map<Aws::String, Aws::String>& value) { m_equalsHasBeenSet = true; m_equals = value; }
    inline void SetEquals(Aws::Map<Aws::String, Aws::String>&& value) { m_equalsHasBeenSet = true; m_equals = std::move(value); }
    inline RequestMetadataFilters& WithEquals(const Aws::Map<Aws::String, Aws::String>& value) { SetEquals(value); return *this;}
    inline RequestMetadataFilters& WithEquals(Aws::Map<Aws::String, Aws::String>&& value) { SetEquals(std::move(value)); return *this;}
    inline RequestMetadataFilters& AddEquals(const Aws::String& key, const Aws::String& value) { m_equalsHasBeenSet = true; m_equals.emplace(key, value); return *this; }
    inline RequestMetadataFilters& AddEquals(Aws::String&& key, const Aws::String& value) { m_equalsHasBeenSet = true; m_equals.emplace(std::move(key), value); return *this; }
    inline RequestMetadataFilters& AddEquals(const Aws::String& key, Aws::String&& value) { m_equalsHasBeenSet = true; m_equals.emplace(key, std::move(value)); return *this; }
    inline RequestMetadataFilters& AddEquals(Aws::String&& key, Aws::String&& value) { m_equalsHasBeenSet = true; m_equals.emplace(std::move(key), std::move(value)); return *this; }
    inline RequestMetadataFilters& AddEquals(const char* key, Aws::String&& value) { m_equalsHasBeenSet = true; m_equals.emplace(key, std::move(value)); return *this; }
    inline RequestMetadataFilters& AddEquals(Aws::String&& key, const char* value) { m_equalsHasBeenSet = true; m_equals.emplace(std::move(key), value); return *this; }
    inline RequestMetadataFilters& AddEquals(const char* key, const char* value) { m_equalsHasBeenSet = true; m_equals.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Include results where the key does not equal the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetNotEquals() const{ return m_notEquals; }
    inline bool NotEqualsHasBeenSet() const { return m_notEqualsHasBeenSet; }
    inline void SetNotEquals(const Aws::Map<Aws::String, Aws::String>& value) { m_notEqualsHasBeenSet = true; m_notEquals = value; }
    inline void SetNotEquals(Aws::Map<Aws::String, Aws::String>&& value) { m_notEqualsHasBeenSet = true; m_notEquals = std::move(value); }
    inline RequestMetadataFilters& WithNotEquals(const Aws::Map<Aws::String, Aws::String>& value) { SetNotEquals(value); return *this;}
    inline RequestMetadataFilters& WithNotEquals(Aws::Map<Aws::String, Aws::String>&& value) { SetNotEquals(std::move(value)); return *this;}
    inline RequestMetadataFilters& AddNotEquals(const Aws::String& key, const Aws::String& value) { m_notEqualsHasBeenSet = true; m_notEquals.emplace(key, value); return *this; }
    inline RequestMetadataFilters& AddNotEquals(Aws::String&& key, const Aws::String& value) { m_notEqualsHasBeenSet = true; m_notEquals.emplace(std::move(key), value); return *this; }
    inline RequestMetadataFilters& AddNotEquals(const Aws::String& key, Aws::String&& value) { m_notEqualsHasBeenSet = true; m_notEquals.emplace(key, std::move(value)); return *this; }
    inline RequestMetadataFilters& AddNotEquals(Aws::String&& key, Aws::String&& value) { m_notEqualsHasBeenSet = true; m_notEquals.emplace(std::move(key), std::move(value)); return *this; }
    inline RequestMetadataFilters& AddNotEquals(const char* key, Aws::String&& value) { m_notEqualsHasBeenSet = true; m_notEquals.emplace(key, std::move(value)); return *this; }
    inline RequestMetadataFilters& AddNotEquals(Aws::String&& key, const char* value) { m_notEqualsHasBeenSet = true; m_notEquals.emplace(std::move(key), value); return *this; }
    inline RequestMetadataFilters& AddNotEquals(const char* key, const char* value) { m_notEqualsHasBeenSet = true; m_notEquals.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Include results where all of the based filters match.</p>
     */
    inline const Aws::Vector<RequestMetadataBaseFilters>& GetAndAll() const{ return m_andAll; }
    inline bool AndAllHasBeenSet() const { return m_andAllHasBeenSet; }
    inline void SetAndAll(const Aws::Vector<RequestMetadataBaseFilters>& value) { m_andAllHasBeenSet = true; m_andAll = value; }
    inline void SetAndAll(Aws::Vector<RequestMetadataBaseFilters>&& value) { m_andAllHasBeenSet = true; m_andAll = std::move(value); }
    inline RequestMetadataFilters& WithAndAll(const Aws::Vector<RequestMetadataBaseFilters>& value) { SetAndAll(value); return *this;}
    inline RequestMetadataFilters& WithAndAll(Aws::Vector<RequestMetadataBaseFilters>&& value) { SetAndAll(std::move(value)); return *this;}
    inline RequestMetadataFilters& AddAndAll(const RequestMetadataBaseFilters& value) { m_andAllHasBeenSet = true; m_andAll.push_back(value); return *this; }
    inline RequestMetadataFilters& AddAndAll(RequestMetadataBaseFilters&& value) { m_andAllHasBeenSet = true; m_andAll.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Include results where any of the base filters match.</p>
     */
    inline const Aws::Vector<RequestMetadataBaseFilters>& GetOrAll() const{ return m_orAll; }
    inline bool OrAllHasBeenSet() const { return m_orAllHasBeenSet; }
    inline void SetOrAll(const Aws::Vector<RequestMetadataBaseFilters>& value) { m_orAllHasBeenSet = true; m_orAll = value; }
    inline void SetOrAll(Aws::Vector<RequestMetadataBaseFilters>&& value) { m_orAllHasBeenSet = true; m_orAll = std::move(value); }
    inline RequestMetadataFilters& WithOrAll(const Aws::Vector<RequestMetadataBaseFilters>& value) { SetOrAll(value); return *this;}
    inline RequestMetadataFilters& WithOrAll(Aws::Vector<RequestMetadataBaseFilters>&& value) { SetOrAll(std::move(value)); return *this;}
    inline RequestMetadataFilters& AddOrAll(const RequestMetadataBaseFilters& value) { m_orAllHasBeenSet = true; m_orAll.push_back(value); return *this; }
    inline RequestMetadataFilters& AddOrAll(RequestMetadataBaseFilters&& value) { m_orAllHasBeenSet = true; m_orAll.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_equals;
    bool m_equalsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_notEquals;
    bool m_notEqualsHasBeenSet = false;

    Aws::Vector<RequestMetadataBaseFilters> m_andAll;
    bool m_andAllHasBeenSet = false;

    Aws::Vector<RequestMetadataBaseFilters> m_orAll;
    bool m_orAllHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
