/*
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
  class AWS_CODECOMMIT_API ObjectTypes
  {
  public:
    ObjectTypes();
    ObjectTypes(Aws::Utils::Json::JsonView jsonValue);
    ObjectTypes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the object in the source branch.</p>
     */
    inline const ObjectTypeEnum& GetSource() const{ return m_source; }

    /**
     * <p>The type of the object in the source branch.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The type of the object in the source branch.</p>
     */
    inline void SetSource(const ObjectTypeEnum& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The type of the object in the source branch.</p>
     */
    inline void SetSource(ObjectTypeEnum&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The type of the object in the source branch.</p>
     */
    inline ObjectTypes& WithSource(const ObjectTypeEnum& value) { SetSource(value); return *this;}

    /**
     * <p>The type of the object in the source branch.</p>
     */
    inline ObjectTypes& WithSource(ObjectTypeEnum&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The type of the object in the destination branch.</p>
     */
    inline const ObjectTypeEnum& GetDestination() const{ return m_destination; }

    /**
     * <p>The type of the object in the destination branch.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The type of the object in the destination branch.</p>
     */
    inline void SetDestination(const ObjectTypeEnum& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The type of the object in the destination branch.</p>
     */
    inline void SetDestination(ObjectTypeEnum&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The type of the object in the destination branch.</p>
     */
    inline ObjectTypes& WithDestination(const ObjectTypeEnum& value) { SetDestination(value); return *this;}

    /**
     * <p>The type of the object in the destination branch.</p>
     */
    inline ObjectTypes& WithDestination(ObjectTypeEnum&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * <p>The type of the object in the base commit of the merge.</p>
     */
    inline const ObjectTypeEnum& GetBase() const{ return m_base; }

    /**
     * <p>The type of the object in the base commit of the merge.</p>
     */
    inline bool BaseHasBeenSet() const { return m_baseHasBeenSet; }

    /**
     * <p>The type of the object in the base commit of the merge.</p>
     */
    inline void SetBase(const ObjectTypeEnum& value) { m_baseHasBeenSet = true; m_base = value; }

    /**
     * <p>The type of the object in the base commit of the merge.</p>
     */
    inline void SetBase(ObjectTypeEnum&& value) { m_baseHasBeenSet = true; m_base = std::move(value); }

    /**
     * <p>The type of the object in the base commit of the merge.</p>
     */
    inline ObjectTypes& WithBase(const ObjectTypeEnum& value) { SetBase(value); return *this;}

    /**
     * <p>The type of the object in the base commit of the merge.</p>
     */
    inline ObjectTypes& WithBase(ObjectTypeEnum&& value) { SetBase(std::move(value)); return *this;}

  private:

    ObjectTypeEnum m_source;
    bool m_sourceHasBeenSet;

    ObjectTypeEnum m_destination;
    bool m_destinationHasBeenSet;

    ObjectTypeEnum m_base;
    bool m_baseHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
