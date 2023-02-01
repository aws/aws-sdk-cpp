/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Details about an antenna demod decode <code>Config</code> used in a
   * contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/AntennaDemodDecodeDetails">AWS
   * API Reference</a></p>
   */
  class AntennaDemodDecodeDetails
  {
  public:
    AWS_GROUNDSTATION_API AntennaDemodDecodeDetails();
    AWS_GROUNDSTATION_API AntennaDemodDecodeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API AntennaDemodDecodeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of an antenna demod decode output node used in a contact.</p>
     */
    inline const Aws::String& GetOutputNode() const{ return m_outputNode; }

    /**
     * <p>Name of an antenna demod decode output node used in a contact.</p>
     */
    inline bool OutputNodeHasBeenSet() const { return m_outputNodeHasBeenSet; }

    /**
     * <p>Name of an antenna demod decode output node used in a contact.</p>
     */
    inline void SetOutputNode(const Aws::String& value) { m_outputNodeHasBeenSet = true; m_outputNode = value; }

    /**
     * <p>Name of an antenna demod decode output node used in a contact.</p>
     */
    inline void SetOutputNode(Aws::String&& value) { m_outputNodeHasBeenSet = true; m_outputNode = std::move(value); }

    /**
     * <p>Name of an antenna demod decode output node used in a contact.</p>
     */
    inline void SetOutputNode(const char* value) { m_outputNodeHasBeenSet = true; m_outputNode.assign(value); }

    /**
     * <p>Name of an antenna demod decode output node used in a contact.</p>
     */
    inline AntennaDemodDecodeDetails& WithOutputNode(const Aws::String& value) { SetOutputNode(value); return *this;}

    /**
     * <p>Name of an antenna demod decode output node used in a contact.</p>
     */
    inline AntennaDemodDecodeDetails& WithOutputNode(Aws::String&& value) { SetOutputNode(std::move(value)); return *this;}

    /**
     * <p>Name of an antenna demod decode output node used in a contact.</p>
     */
    inline AntennaDemodDecodeDetails& WithOutputNode(const char* value) { SetOutputNode(value); return *this;}

  private:

    Aws::String m_outputNode;
    bool m_outputNodeHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
