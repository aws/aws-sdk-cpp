/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/PrefixType.h>
#include <aws/appflow/model/PrefixFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appflow/model/PathPrefix.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p>Specifies elements that Amazon AppFlow includes in the file and folder names
   * in the flow destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/PrefixConfig">AWS
   * API Reference</a></p>
   */
  class PrefixConfig
  {
  public:
    AWS_APPFLOW_API PrefixConfig() = default;
    AWS_APPFLOW_API PrefixConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API PrefixConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines the format of the prefix, and whether it applies to the file name,
     * file path, or both. </p>
     */
    inline PrefixType GetPrefixType() const { return m_prefixType; }
    inline bool PrefixTypeHasBeenSet() const { return m_prefixTypeHasBeenSet; }
    inline void SetPrefixType(PrefixType value) { m_prefixTypeHasBeenSet = true; m_prefixType = value; }
    inline PrefixConfig& WithPrefixType(PrefixType value) { SetPrefixType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the level of granularity for the date and time that's included in
     * the prefix. </p>
     */
    inline PrefixFormat GetPrefixFormat() const { return m_prefixFormat; }
    inline bool PrefixFormatHasBeenSet() const { return m_prefixFormatHasBeenSet; }
    inline void SetPrefixFormat(PrefixFormat value) { m_prefixFormatHasBeenSet = true; m_prefixFormat = value; }
    inline PrefixConfig& WithPrefixFormat(PrefixFormat value) { SetPrefixFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the destination file path includes either or both of the
     * following elements:</p> <dl> <dt>EXECUTION_ID</dt> <dd> <p>The ID that Amazon
     * AppFlow assigns to the flow run.</p> </dd> <dt>SCHEMA_VERSION</dt> <dd> <p>The
     * version number of your data schema. Amazon AppFlow assigns this version number.
     * The version number increases by one when you change any of the following
     * settings in your flow configuration:</p> <ul> <li> <p>Source-to-destination
     * field mappings</p> </li> <li> <p>Field data types</p> </li> <li> <p>Partition
     * keys</p> </li> </ul> </dd> </dl>
     */
    inline const Aws::Vector<PathPrefix>& GetPathPrefixHierarchy() const { return m_pathPrefixHierarchy; }
    inline bool PathPrefixHierarchyHasBeenSet() const { return m_pathPrefixHierarchyHasBeenSet; }
    template<typename PathPrefixHierarchyT = Aws::Vector<PathPrefix>>
    void SetPathPrefixHierarchy(PathPrefixHierarchyT&& value) { m_pathPrefixHierarchyHasBeenSet = true; m_pathPrefixHierarchy = std::forward<PathPrefixHierarchyT>(value); }
    template<typename PathPrefixHierarchyT = Aws::Vector<PathPrefix>>
    PrefixConfig& WithPathPrefixHierarchy(PathPrefixHierarchyT&& value) { SetPathPrefixHierarchy(std::forward<PathPrefixHierarchyT>(value)); return *this;}
    inline PrefixConfig& AddPathPrefixHierarchy(PathPrefix value) { m_pathPrefixHierarchyHasBeenSet = true; m_pathPrefixHierarchy.push_back(value); return *this; }
    ///@}
  private:

    PrefixType m_prefixType{PrefixType::NOT_SET};
    bool m_prefixTypeHasBeenSet = false;

    PrefixFormat m_prefixFormat{PrefixFormat::NOT_SET};
    bool m_prefixFormatHasBeenSet = false;

    Aws::Vector<PathPrefix> m_pathPrefixHierarchy;
    bool m_pathPrefixHierarchyHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
