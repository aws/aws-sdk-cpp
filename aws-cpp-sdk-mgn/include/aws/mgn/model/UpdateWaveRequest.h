/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class UpdateWaveRequest : public MgnRequest
  {
  public:
    AWS_MGN_API UpdateWaveRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWave"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>Wave description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Wave description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Wave description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Wave description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Wave description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Wave description.</p>
     */
    inline UpdateWaveRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Wave description.</p>
     */
    inline UpdateWaveRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Wave description.</p>
     */
    inline UpdateWaveRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Wave name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Wave name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Wave name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Wave name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Wave name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Wave name.</p>
     */
    inline UpdateWaveRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Wave name.</p>
     */
    inline UpdateWaveRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Wave name.</p>
     */
    inline UpdateWaveRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Wave ID.</p>
     */
    inline const Aws::String& GetWaveID() const{ return m_waveID; }

    /**
     * <p>Wave ID.</p>
     */
    inline bool WaveIDHasBeenSet() const { return m_waveIDHasBeenSet; }

    /**
     * <p>Wave ID.</p>
     */
    inline void SetWaveID(const Aws::String& value) { m_waveIDHasBeenSet = true; m_waveID = value; }

    /**
     * <p>Wave ID.</p>
     */
    inline void SetWaveID(Aws::String&& value) { m_waveIDHasBeenSet = true; m_waveID = std::move(value); }

    /**
     * <p>Wave ID.</p>
     */
    inline void SetWaveID(const char* value) { m_waveIDHasBeenSet = true; m_waveID.assign(value); }

    /**
     * <p>Wave ID.</p>
     */
    inline UpdateWaveRequest& WithWaveID(const Aws::String& value) { SetWaveID(value); return *this;}

    /**
     * <p>Wave ID.</p>
     */
    inline UpdateWaveRequest& WithWaveID(Aws::String&& value) { SetWaveID(std::move(value)); return *this;}

    /**
     * <p>Wave ID.</p>
     */
    inline UpdateWaveRequest& WithWaveID(const char* value) { SetWaveID(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_waveID;
    bool m_waveIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
