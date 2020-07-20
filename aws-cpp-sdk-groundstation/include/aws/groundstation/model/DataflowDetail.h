/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/Destination.h>
#include <aws/groundstation/model/Source.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Information about a dataflow edge used in a contact.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DataflowDetail">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API DataflowDetail
  {
  public:
    DataflowDetail();
    DataflowDetail(Aws::Utils::Json::JsonView jsonValue);
    DataflowDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Destination& GetDestination() const{ return m_destination; }

    
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    
    inline void SetDestination(const Destination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    
    inline void SetDestination(Destination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    
    inline DataflowDetail& WithDestination(const Destination& value) { SetDestination(value); return *this;}

    
    inline DataflowDetail& WithDestination(Destination&& value) { SetDestination(std::move(value)); return *this;}


    
    inline const Source& GetSource() const{ return m_source; }

    
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    
    inline void SetSource(const Source& value) { m_sourceHasBeenSet = true; m_source = value; }

    
    inline void SetSource(Source&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    
    inline DataflowDetail& WithSource(const Source& value) { SetSource(value); return *this;}

    
    inline DataflowDetail& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}

  private:

    Destination m_destination;
    bool m_destinationHasBeenSet;

    Source m_source;
    bool m_sourceHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
