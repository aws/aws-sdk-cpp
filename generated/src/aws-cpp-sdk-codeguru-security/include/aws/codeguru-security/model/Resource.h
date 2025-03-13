/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
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
namespace CodeGuruSecurity
{
namespace Model
{

  /**
   * <p>Information about a resource that contains a finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-security-2018-05-10/Resource">AWS
   * API Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_CODEGURUSECURITY_API Resource() = default;
    AWS_CODEGURUSECURITY_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUSECURITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>scanName</code> of the scan that was run on the resource.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Resource& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for a section of the resource.</p>
     */
    inline const Aws::String& GetSubResourceId() const { return m_subResourceId; }
    inline bool SubResourceIdHasBeenSet() const { return m_subResourceIdHasBeenSet; }
    template<typename SubResourceIdT = Aws::String>
    void SetSubResourceId(SubResourceIdT&& value) { m_subResourceIdHasBeenSet = true; m_subResourceId = std::forward<SubResourceIdT>(value); }
    template<typename SubResourceIdT = Aws::String>
    Resource& WithSubResourceId(SubResourceIdT&& value) { SetSubResourceId(std::forward<SubResourceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_subResourceId;
    bool m_subResourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
