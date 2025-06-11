/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ControlCatalog
{
namespace Model
{

  /**
   * <p>A structure that defines filtering criteria for control implementations. You
   * can use this filter to find controls that are implemented by specific Amazon Web
   * Services services or with specific service identifiers.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/ImplementationFilter">AWS
   * API Reference</a></p>
   */
  class ImplementationFilter
  {
  public:
    AWS_CONTROLCATALOG_API ImplementationFilter() = default;
    AWS_CONTROLCATALOG_API ImplementationFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API ImplementationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of implementation types that can serve as filters. For example, you
     * can filter for controls implemented as Amazon Web Services Config Rules by
     * specifying AWS::Config::ConfigRule as a type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTypes() const { return m_types; }
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
    template<typename TypesT = Aws::Vector<Aws::String>>
    void SetTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types = std::forward<TypesT>(value); }
    template<typename TypesT = Aws::Vector<Aws::String>>
    ImplementationFilter& WithTypes(TypesT&& value) { SetTypes(std::forward<TypesT>(value)); return *this;}
    template<typename TypesT = Aws::String>
    ImplementationFilter& AddTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types.emplace_back(std::forward<TypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of service-specific identifiers that can serve as filters. For
     * example, you can filter for controls with specific Amazon Web Services Config
     * Rule IDs or Security Hub Control IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdentifiers() const { return m_identifiers; }
    inline bool IdentifiersHasBeenSet() const { return m_identifiersHasBeenSet; }
    template<typename IdentifiersT = Aws::Vector<Aws::String>>
    void SetIdentifiers(IdentifiersT&& value) { m_identifiersHasBeenSet = true; m_identifiers = std::forward<IdentifiersT>(value); }
    template<typename IdentifiersT = Aws::Vector<Aws::String>>
    ImplementationFilter& WithIdentifiers(IdentifiersT&& value) { SetIdentifiers(std::forward<IdentifiersT>(value)); return *this;}
    template<typename IdentifiersT = Aws::String>
    ImplementationFilter& AddIdentifiers(IdentifiersT&& value) { m_identifiersHasBeenSet = true; m_identifiers.emplace_back(std::forward<IdentifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_types;
    bool m_typesHasBeenSet = false;

    Aws::Vector<Aws::String> m_identifiers;
    bool m_identifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
