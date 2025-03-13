/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>A pair of ObjectIdentifier and LinkName.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ObjectIdentifierAndLinkNameTuple">AWS
   * API Reference</a></p>
   */
  class ObjectIdentifierAndLinkNameTuple
  {
  public:
    AWS_CLOUDDIRECTORY_API ObjectIdentifierAndLinkNameTuple() = default;
    AWS_CLOUDDIRECTORY_API ObjectIdentifierAndLinkNameTuple(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API ObjectIdentifierAndLinkNameTuple& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID that is associated with the object.</p>
     */
    inline const Aws::String& GetObjectIdentifier() const { return m_objectIdentifier; }
    inline bool ObjectIdentifierHasBeenSet() const { return m_objectIdentifierHasBeenSet; }
    template<typename ObjectIdentifierT = Aws::String>
    void SetObjectIdentifier(ObjectIdentifierT&& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = std::forward<ObjectIdentifierT>(value); }
    template<typename ObjectIdentifierT = Aws::String>
    ObjectIdentifierAndLinkNameTuple& WithObjectIdentifier(ObjectIdentifierT&& value) { SetObjectIdentifier(std::forward<ObjectIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the link between the parent and the child object.</p>
     */
    inline const Aws::String& GetLinkName() const { return m_linkName; }
    inline bool LinkNameHasBeenSet() const { return m_linkNameHasBeenSet; }
    template<typename LinkNameT = Aws::String>
    void SetLinkName(LinkNameT&& value) { m_linkNameHasBeenSet = true; m_linkName = std::forward<LinkNameT>(value); }
    template<typename LinkNameT = Aws::String>
    ObjectIdentifierAndLinkNameTuple& WithLinkName(LinkNameT&& value) { SetLinkName(std::forward<LinkNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_objectIdentifier;
    bool m_objectIdentifierHasBeenSet = false;

    Aws::String m_linkName;
    bool m_linkNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
