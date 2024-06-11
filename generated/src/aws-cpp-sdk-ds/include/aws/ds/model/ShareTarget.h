/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/TargetType.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Identifier that contains details about the directory consumer
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/ShareTarget">AWS API
   * Reference</a></p>
   */
  class ShareTarget
  {
  public:
    AWS_DIRECTORYSERVICE_API ShareTarget();
    AWS_DIRECTORYSERVICE_API ShareTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API ShareTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier of the directory consumer account.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ShareTarget& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ShareTarget& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ShareTarget& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of identifier to be used in the <code>Id</code> field.</p>
     */
    inline const TargetType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TargetType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TargetType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ShareTarget& WithType(const TargetType& value) { SetType(value); return *this;}
    inline ShareTarget& WithType(TargetType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    TargetType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
