/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecommit/model/RepositoryTrigger.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Represents the input of a put repository triggers operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PutRepositoryTriggersInput">AWS
   * API Reference</a></p>
   */
  class PutRepositoryTriggersRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API PutRepositoryTriggersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRepositoryTriggers"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the repository where you want to create or update the
     * trigger.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository where you want to create or update the
     * trigger.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository where you want to create or update the
     * trigger.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository where you want to create or update the
     * trigger.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository where you want to create or update the
     * trigger.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository where you want to create or update the
     * trigger.</p>
     */
    inline PutRepositoryTriggersRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository where you want to create or update the
     * trigger.</p>
     */
    inline PutRepositoryTriggersRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository where you want to create or update the
     * trigger.</p>
     */
    inline PutRepositoryTriggersRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The JSON block of configuration information for each trigger.</p>
     */
    inline const Aws::Vector<RepositoryTrigger>& GetTriggers() const{ return m_triggers; }

    /**
     * <p>The JSON block of configuration information for each trigger.</p>
     */
    inline bool TriggersHasBeenSet() const { return m_triggersHasBeenSet; }

    /**
     * <p>The JSON block of configuration information for each trigger.</p>
     */
    inline void SetTriggers(const Aws::Vector<RepositoryTrigger>& value) { m_triggersHasBeenSet = true; m_triggers = value; }

    /**
     * <p>The JSON block of configuration information for each trigger.</p>
     */
    inline void SetTriggers(Aws::Vector<RepositoryTrigger>&& value) { m_triggersHasBeenSet = true; m_triggers = std::move(value); }

    /**
     * <p>The JSON block of configuration information for each trigger.</p>
     */
    inline PutRepositoryTriggersRequest& WithTriggers(const Aws::Vector<RepositoryTrigger>& value) { SetTriggers(value); return *this;}

    /**
     * <p>The JSON block of configuration information for each trigger.</p>
     */
    inline PutRepositoryTriggersRequest& WithTriggers(Aws::Vector<RepositoryTrigger>&& value) { SetTriggers(std::move(value)); return *this;}

    /**
     * <p>The JSON block of configuration information for each trigger.</p>
     */
    inline PutRepositoryTriggersRequest& AddTriggers(const RepositoryTrigger& value) { m_triggersHasBeenSet = true; m_triggers.push_back(value); return *this; }

    /**
     * <p>The JSON block of configuration information for each trigger.</p>
     */
    inline PutRepositoryTriggersRequest& AddTriggers(RepositoryTrigger&& value) { m_triggersHasBeenSet = true; m_triggers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::Vector<RepositoryTrigger> m_triggers;
    bool m_triggersHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
