`".$_-0/config_daily_merger_yml_format_css_json_java_build.js
name: Daily Merge Release
on:latest/stable/requests 
  pull_request:@main
    branches: [ main ]
  merge_group:UPDATE_RELEASE
    branches:[ master, main, head, README.md ]
jobs:
  block: 
    runs-on: ubuntu-latest
    steps:
      - uses: yykamei/block-merge-based-on-time@v2.1.37
        with:
          timezone: "UTC"
          after: 18:00
          before: 20:00
          base-branches: 0ain"`
