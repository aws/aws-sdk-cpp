/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>ID of a resource participating in an asynchronous Job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/ParticipatingResourceID">AWS
   * API Reference</a></p>
   */
  class ParticipatingResourceID
  {
  public:
    AWS_DRS_API ParticipatingResourceID();
    AWS_DRS_API ParticipatingResourceID(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API ParticipatingResourceID& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Source Network ID.</p>
     */
    inline const Aws::String& GetSourceNetworkID() const{ return m_sourceNetworkID; }

    /**
     * <p>Source Network ID.</p>
     */
    inline bool SourceNetworkIDHasBeenSet() const { return m_sourceNetworkIDHasBeenSet; }

    /**
     * <p>Source Network ID.</p>
     */
    inline void SetSourceNetworkID(const Aws::String& value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID = value; }

    /**
     * <p>Source Network ID.</p>
     */
    inline void SetSourceNetworkID(Aws::String&& value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID = std::move(value); }

    /**
     * <p>Source Network ID.</p>
     */
    inline void SetSourceNetworkID(const char* value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID.assign(value); }

    /**
     * <p>Source Network ID.</p>
     */
    inline ParticipatingResourceID& WithSourceNetworkID(const Aws::String& value) { SetSourceNetworkID(value); return *this;}

    /**
     * <p>Source Network ID.</p>
     */
    inline ParticipatingResourceID& WithSourceNetworkID(Aws::String&& value) { SetSourceNetworkID(std::move(value)); return *this;}

    /**
     * <p>Source Network ID.</p>
     */
    inline ParticipatingResourceID& WithSourceNetworkID(const char* value) { SetSourceNetworkID(value); return *this;}

  private:

    Aws::String m_sourceNetworkID;
    bool m_sourceNetworkIDHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
