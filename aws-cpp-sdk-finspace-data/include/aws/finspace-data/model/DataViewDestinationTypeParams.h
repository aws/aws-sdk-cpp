/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
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
namespace FinSpaceData
{
namespace Model
{

  /**
   * <p>Structure for the Dataview destination type parameters.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/DataViewDestinationTypeParams">AWS
   * API Reference</a></p>
   */
  class AWS_FINSPACEDATA_API DataViewDestinationTypeParams
  {
  public:
    DataViewDestinationTypeParams();
    DataViewDestinationTypeParams(Aws::Utils::Json::JsonView jsonValue);
    DataViewDestinationTypeParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> -
     * Glue table destination type.</p> </li> </ul>
     */
    inline const Aws::String& GetDestinationType() const{ return m_destinationType; }

    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> -
     * Glue table destination type.</p> </li> </ul>
     */
    inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }

    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> -
     * Glue table destination type.</p> </li> </ul>
     */
    inline void SetDestinationType(const Aws::String& value) { m_destinationTypeHasBeenSet = true; m_destinationType = value; }

    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> -
     * Glue table destination type.</p> </li> </ul>
     */
    inline void SetDestinationType(Aws::String&& value) { m_destinationTypeHasBeenSet = true; m_destinationType = std::move(value); }

    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> -
     * Glue table destination type.</p> </li> </ul>
     */
    inline void SetDestinationType(const char* value) { m_destinationTypeHasBeenSet = true; m_destinationType.assign(value); }

    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> -
     * Glue table destination type.</p> </li> </ul>
     */
    inline DataViewDestinationTypeParams& WithDestinationType(const Aws::String& value) { SetDestinationType(value); return *this;}

    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> -
     * Glue table destination type.</p> </li> </ul>
     */
    inline DataViewDestinationTypeParams& WithDestinationType(Aws::String&& value) { SetDestinationType(std::move(value)); return *this;}

    /**
     * <p>Destination type for a Dataview.</p> <ul> <li> <p> <code>GLUE_TABLE</code> -
     * Glue table destination type.</p> </li> </ul>
     */
    inline DataViewDestinationTypeParams& WithDestinationType(const char* value) { SetDestinationType(value); return *this;}

  private:

    Aws::String m_destinationType;
    bool m_destinationTypeHasBeenSet;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
