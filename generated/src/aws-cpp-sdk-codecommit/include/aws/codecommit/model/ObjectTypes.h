/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/ObjectTypeEnum.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Information about the type of an object in a merge operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/ObjectTypes">AWS
   * API Reference</a></p>
   */
  class ObjectTypes
  {
  public:
    AWS_CODECOMMIT_API ObjectTypes() = default;
    AWS_CODECOMMIT_API ObjectTypes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API ObjectTypes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the object in the source branch.</p>
     */
    inline ObjectTypeEnum GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(ObjectTypeEnum value) { m_sourceHasBeenSet = true; m_source = value; }
    inline ObjectTypes& WithSource(ObjectTypeEnum value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the object in the destination branch.</p>
     */
    inline ObjectTypeEnum GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(ObjectTypeEnum value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline ObjectTypes& WithDestination(ObjectTypeEnum value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the object in the base commit of the merge.</p>
     */
    inline ObjectTypeEnum GetBase() const { return m_base; }
    inline bool BaseHasBeenSet() const { return m_baseHasBeenSet; }
    inline void SetBase(ObjectTypeEnum value) { m_baseHasBeenSet = true; m_base = value; }
    inline ObjectTypes& WithBase(ObjectTypeEnum value) { SetBase(value); return *this;}
    ///@}
  private:

    ObjectTypeEnum m_source{ObjectTypeEnum::NOT_SET};
    bool m_sourceHasBeenSet = false;

    ObjectTypeEnum m_destination{ObjectTypeEnum::NOT_SET};
    bool m_destinationHasBeenSet = false;

    ObjectTypeEnum m_base{ObjectTypeEnum::NOT_SET};
    bool m_baseHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
