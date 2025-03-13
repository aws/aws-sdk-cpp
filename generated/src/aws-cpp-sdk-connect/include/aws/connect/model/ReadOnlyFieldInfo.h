/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TaskTemplateFieldIdentifier.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Indicates a field that is read-only to an agent.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ReadOnlyFieldInfo">AWS
   * API Reference</a></p>
   */
  class ReadOnlyFieldInfo
  {
  public:
    AWS_CONNECT_API ReadOnlyFieldInfo() = default;
    AWS_CONNECT_API ReadOnlyFieldInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ReadOnlyFieldInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier of the read-only field.</p>
     */
    inline const TaskTemplateFieldIdentifier& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = TaskTemplateFieldIdentifier>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = TaskTemplateFieldIdentifier>
    ReadOnlyFieldInfo& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
  private:

    TaskTemplateFieldIdentifier m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
