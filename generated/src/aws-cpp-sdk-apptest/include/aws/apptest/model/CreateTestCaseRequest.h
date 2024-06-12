/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/AppTestRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apptest/model/Step.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace AppTest
{
namespace Model
{

  /**
   */
  class CreateTestCaseRequest : public AppTestRequest
  {
  public:
    AWS_APPTEST_API CreateTestCaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTestCase"; }

    AWS_APPTEST_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the test case.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateTestCaseRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateTestCaseRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateTestCaseRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the test case.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateTestCaseRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateTestCaseRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateTestCaseRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The steps in the test case.</p>
     */
    inline const Aws::Vector<Step>& GetSteps() const{ return m_steps; }
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
    inline void SetSteps(const Aws::Vector<Step>& value) { m_stepsHasBeenSet = true; m_steps = value; }
    inline void SetSteps(Aws::Vector<Step>&& value) { m_stepsHasBeenSet = true; m_steps = std::move(value); }
    inline CreateTestCaseRequest& WithSteps(const Aws::Vector<Step>& value) { SetSteps(value); return *this;}
    inline CreateTestCaseRequest& WithSteps(Aws::Vector<Step>&& value) { SetSteps(std::move(value)); return *this;}
    inline CreateTestCaseRequest& AddSteps(const Step& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }
    inline CreateTestCaseRequest& AddSteps(Step&& value) { m_stepsHasBeenSet = true; m_steps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The client token of the test case.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateTestCaseRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateTestCaseRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateTestCaseRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified tags of the test case.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateTestCaseRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateTestCaseRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateTestCaseRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateTestCaseRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateTestCaseRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateTestCaseRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateTestCaseRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateTestCaseRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateTestCaseRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Step> m_steps;
    bool m_stepsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
