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
    AWS_BEDROCK_API RequestMetadataFilters() = default;
    AWS_BEDROCK_API RequestMetadataFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API RequestMetadataFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Include results where the key equals the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEquals() const { return m_equals; }
    inline bool EqualsHasBeenSet() const { return m_equalsHasBeenSet; }
    template<typename EqualsT = Aws::Map<Aws::String, Aws::String>>
    void SetEquals(EqualsT&& value) { m_equalsHasBeenSet = true; m_equals = std::forward<EqualsT>(value); }
    template<typename EqualsT = Aws::Map<Aws::String, Aws::String>>
    RequestMetadataFilters& WithEquals(EqualsT&& value) { SetEquals(std::forward<EqualsT>(value)); return *this;}
    template<typename EqualsKeyT = Aws::String, typename EqualsValueT = Aws::String>
    RequestMetadataFilters& AddEquals(EqualsKeyT&& key, EqualsValueT&& value) {
      m_equalsHasBeenSet = true; m_equals.emplace(std::forward<EqualsKeyT>(key), std::forward<EqualsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Include results where the key does not equal the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetNotEquals() const { return m_notEquals; }
    inline bool NotEqualsHasBeenSet() const { return m_notEqualsHasBeenSet; }
    template<typename NotEqualsT = Aws::Map<Aws::String, Aws::String>>
    void SetNotEquals(NotEqualsT&& value) { m_notEqualsHasBeenSet = true; m_notEquals = std::forward<NotEqualsT>(value); }
    template<typename NotEqualsT = Aws::Map<Aws::String, Aws::String>>
    RequestMetadataFilters& WithNotEquals(NotEqualsT&& value) { SetNotEquals(std::forward<NotEqualsT>(value)); return *this;}
    template<typename NotEqualsKeyT = Aws::String, typename NotEqualsValueT = Aws::String>
    RequestMetadataFilters& AddNotEquals(NotEqualsKeyT&& key, NotEqualsValueT&& value) {
      m_notEqualsHasBeenSet = true; m_notEquals.emplace(std::forward<NotEqualsKeyT>(key), std::forward<NotEqualsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Include results where all of the based filters match.</p>
     */
    inline const Aws::Vector<RequestMetadataBaseFilters>& GetAndAll() const { return m_andAll; }
    inline bool AndAllHasBeenSet() const { return m_andAllHasBeenSet; }
    template<typename AndAllT = Aws::Vector<RequestMetadataBaseFilters>>
    void SetAndAll(AndAllT&& value) { m_andAllHasBeenSet = true; m_andAll = std::forward<AndAllT>(value); }
    template<typename AndAllT = Aws::Vector<RequestMetadataBaseFilters>>
    RequestMetadataFilters& WithAndAll(AndAllT&& value) { SetAndAll(std::forward<AndAllT>(value)); return *this;}
    template<typename AndAllT = RequestMetadataBaseFilters>
    RequestMetadataFilters& AddAndAll(AndAllT&& value) { m_andAllHasBeenSet = true; m_andAll.emplace_back(std::forward<AndAllT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Include results where any of the base filters match.</p>
     */
    inline const Aws::Vector<RequestMetadataBaseFilters>& GetOrAll() const { return m_orAll; }
    inline bool OrAllHasBeenSet() const { return m_orAllHasBeenSet; }
    template<typename OrAllT = Aws::Vector<RequestMetadataBaseFilters>>
    void SetOrAll(OrAllT&& value) { m_orAllHasBeenSet = true; m_orAll = std::forward<OrAllT>(value); }
    template<typename OrAllT = Aws::Vector<RequestMetadataBaseFilters>>
    RequestMetadataFilters& WithOrAll(OrAllT&& value) { SetOrAll(std::forward<OrAllT>(value)); return *this;}
    template<typename OrAllT = RequestMetadataBaseFilters>
    RequestMetadataFilters& AddOrAll(OrAllT&& value) { m_orAllHasBeenSet = true; m_orAll.emplace_back(std::forward<OrAllT>(value)); return *this; }
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
