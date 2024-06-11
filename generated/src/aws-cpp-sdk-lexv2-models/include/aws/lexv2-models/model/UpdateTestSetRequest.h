﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class UpdateTestSetRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API UpdateTestSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTestSet"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The test set Id for which update test operation to be performed.</p>
     */
    inline const Aws::String& GetTestSetId() const{ return m_testSetId; }
    inline bool TestSetIdHasBeenSet() const { return m_testSetIdHasBeenSet; }
    inline void SetTestSetId(const Aws::String& value) { m_testSetIdHasBeenSet = true; m_testSetId = value; }
    inline void SetTestSetId(Aws::String&& value) { m_testSetIdHasBeenSet = true; m_testSetId = std::move(value); }
    inline void SetTestSetId(const char* value) { m_testSetIdHasBeenSet = true; m_testSetId.assign(value); }
    inline UpdateTestSetRequest& WithTestSetId(const Aws::String& value) { SetTestSetId(value); return *this;}
    inline UpdateTestSetRequest& WithTestSetId(Aws::String&& value) { SetTestSetId(std::move(value)); return *this;}
    inline UpdateTestSetRequest& WithTestSetId(const char* value) { SetTestSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new test set name.</p>
     */
    inline const Aws::String& GetTestSetName() const{ return m_testSetName; }
    inline bool TestSetNameHasBeenSet() const { return m_testSetNameHasBeenSet; }
    inline void SetTestSetName(const Aws::String& value) { m_testSetNameHasBeenSet = true; m_testSetName = value; }
    inline void SetTestSetName(Aws::String&& value) { m_testSetNameHasBeenSet = true; m_testSetName = std::move(value); }
    inline void SetTestSetName(const char* value) { m_testSetNameHasBeenSet = true; m_testSetName.assign(value); }
    inline UpdateTestSetRequest& WithTestSetName(const Aws::String& value) { SetTestSetName(value); return *this;}
    inline UpdateTestSetRequest& WithTestSetName(Aws::String&& value) { SetTestSetName(std::move(value)); return *this;}
    inline UpdateTestSetRequest& WithTestSetName(const char* value) { SetTestSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new test set description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateTestSetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateTestSetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateTestSetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_testSetId;
    bool m_testSetIdHasBeenSet = false;

    Aws::String m_testSetName;
    bool m_testSetNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
